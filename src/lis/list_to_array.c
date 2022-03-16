/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_to_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:04:35 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 12:11:07 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lis.h"

int	*list_to_array(t_list *list)
{
	t_element	*node;
	int			*arr;
	int			size;
	int			i;

	size = list->size;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (0);
	i = 0;
	node = list->head;
	while (i < size)
	{
		arr[i] = node->data;
		node = node->next;
		i++;
	}
	return (arr);
}
