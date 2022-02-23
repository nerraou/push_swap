/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:37:09 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/23 17:48:32 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void add_front(t_list *list,int new_data)
{
	t_element *node;
	
	node = node_new(new_data);
	if (!node)
		return ;
	if (!list->tail)
		list->tail = node;
	node->next = list->head;
	if (list->head != NULL)
		list->head->prev = node;
	list->head = node;
	list->size++;
}
