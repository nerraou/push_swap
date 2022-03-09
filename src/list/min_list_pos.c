/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_list_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:57:55 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/09 19:18:01 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int min_list_pos(t_list *list)
{
	int min;
	int pos;
	int min_pos;
	t_element *elm;

	elm = list->head;
	min = 0;
	pos = 0;
	while (elm != NULL)
	{
		if (min < elm->data)
		{
			min = elm->data;
			min_pos = pos;
		}
		pos++;
		elm = elm->next;
	}
	return (min_pos);
}