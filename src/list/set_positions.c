/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_positions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:30:30 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/12 13:11:33 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static void ft_free(int **arr, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int **set_positions(t_list *list_a, t_list *list_b)
{
	int **arr;
	int i;
	int pos;
	t_element *node;

	arr = (int **)malloc(sizeof(int *) * list_b->size);
	if (!arr)
		return NULL;
	i = 0;
	pos = 0;
	node = list_b->head;
	while (i < list_b->size)
	{
		arr[i] = (int *)malloc(sizeof(int) * 2);
		if (!arr[i])
		{
			ft_free(arr, i);
			return NULL;
		}
		pos = inst_to_pos(list_a, node->data);
		// printf("[posA] %d\n", pos);
		arr[i][0] = pos;
		pos = inst_to_top(i, list_b->size);
		// printf("[posB] %d\n", pos);
		arr[i][1] = pos;
		i++;
		node = node->next;
	}
	return (arr);
}
