/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:16:12 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 13:03:14 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	map_values(t_list *list, int *map)
{
	t_element	*node;

	node = list->head;
	while (node != NULL)
	{
		node->m_data = ft_i_indexof(map, list->size, node->data);
		node = node->next;
	}
}
