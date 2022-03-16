/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_list_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:57:55 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 13:04:38 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	min_list_pos(t_list *list)
{
	t_element	*elm;
	int			min;
	int			pos;
	int			min_pos;

	elm = list->head;
	pos = 0;
	min_pos = 0;
	min = elm->data;
	while (elm != NULL)
	{
		if (min > elm->data)
		{
			min = elm->data;
			min_pos = pos;
		}
		pos++;
		elm = elm->next;
	}
	return (min_pos);
}
