/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_positions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:30:30 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 13:37:25 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static void	ft_free(int **arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	**set_positions(t_list *list_a, t_list *list_b)
{
	t_element	*node;
	int			**positions;
	int			i;

	positions = (int **)malloc(sizeof(int *) * list_b->size);
	if (!positions)
		return (NULL);
	i = 0;
	node = list_b->head;
	while (i < list_b->size)
	{
		positions[i] = (int *)malloc(sizeof(int) * 2);
		if (!positions[i])
		{
			ft_free(positions, i);
			return (NULL);
		}
		positions[i][0] = inst_to_pos(list_a, node->data);
		positions[i][1] = inst_to_top(i, list_b->size);
		i++;
		node = node->next;
	}
	return (positions);
}
