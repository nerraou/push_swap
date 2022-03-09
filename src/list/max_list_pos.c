/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_list_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:52:07 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/09 19:15:06 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int max_list_pos(t_list *list)
{
	int max;
	int pos;
	int max_pos;
	t_element *elm;

	elm = list->head;
	max = 0;
	pos = 0;
	while (elm != NULL)
	{
		if (max < elm->data)
		{
			max = elm->data;
			max_pos = pos;
		}
		pos++;
		elm = elm->next;
	}
	return (max_pos);
}