/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_to_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:48:28 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/09 20:35:04 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int inst_to_pos(t_list *list_a, int data)
{
	t_element *elem;
	int pos;
	int h_s;
	int max_pos;

	pos = 0;
	h_s = list_a->size / 2;
	elem = list_a->head;
	printf("[data]%d\n", data);
	while (elem != NULL && elem->next != NULL)
	{
		printf("[elm]%d [elem->next]%d\n", elem->data, elem->next->data);
		if (data > elem->data && data < elem->next->data)
		{
			printf("[pos]%d\n", pos);
			if (pos <= h_s)
				return (pos + 1);
			else
				return (pos - list_a->size);
		}
		pos++;
		elem = elem->next;
	}
	max_pos = max_list_pos(list_a);
	printf("[data]%d  [max_pos]%d\n", data, max_pos);
	if (max_pos <= h_s)
		return (max_pos + 1);
	else
		return (max_pos * -1 - 1);
}