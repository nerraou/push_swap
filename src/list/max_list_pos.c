/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_list_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:52:07 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 13:04:07 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	max_list_pos(t_list *list)
{
	t_element	*elm;
	int			max;
	int			pos;
	int			max_pos;

	elm = list->head;
	max_pos = 0;
	max = elm->data;
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
