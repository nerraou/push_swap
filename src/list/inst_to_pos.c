/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_to_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:48:28 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 15:45:04 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static int	max_pos(t_list *list)
{
	int	max_pos;
	int	h_s;

	h_s = list->size / 2;
	max_pos = max_list_pos(list);
	if (max_pos <= h_s)
		return (max_pos + 1);
	else
		return ((max_pos + 1) - list->size);
}

int	inst_to_pos(t_list *list_a, int data)
{
	t_element	*head;
	t_element	*tail;
	int			h_s;
	int			i;

	h_s = list_a->size / 2;
	head = list_a->head;
	tail = list_a->tail;
	if (data > tail->data && data < head->data)
		return (0);
	i = -1;
	while (++i <= h_s && head && head->next)
	{
		if (data > head->data && data < head->next->data)
			return (i + 1);
		head = head->next;
	}
	i = list_a->size;
	while (--i >= h_s && tail && tail->prev)
	{
		if (data > tail->prev->data && data < tail->data)
			return (i - list_a->size);
		tail = tail->prev;
	}
	return (max_pos(list_a));
}
