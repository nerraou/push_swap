/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:15:01 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/23 17:50:52 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void add_back(t_list *list, int new_data)
{
	t_element *node;

	node = node_new(new_data);
	if (!node)
		return ;
	if(!list->head)
		list->head = node;
	if(!list->tail)
		list->tail = node;
	else
	{
		list->tail->next = node;
		node->prev = list->tail;
		list->tail = node;
	}
}
