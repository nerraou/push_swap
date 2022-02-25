/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_pop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:17:17 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/25 15:21:42 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int list_pop(t_list *list)
{
	int data;
	t_element *last;

	last = list->tail;
	data = last->data;
	list->tail = last->prev;
	free(last);
	list->size--;
	if (list->size != 0)
		list->tail->next = NULL;
	else
		list->head = NULL;
	return (data);
}