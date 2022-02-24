/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_shift.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:19:18 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/24 17:40:31 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int list_shift(t_list *list)
{
	t_element *first;
	int data;

	first = list->head;
	data = first->data;
	list->head = first->next;
	free(first);
	list->head->prev = NULL;
	list->size--;
	return (data);
}
