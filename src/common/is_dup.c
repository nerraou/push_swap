/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:43:38 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 11:23:20 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

int	is_dup(t_list *list)
{

	t_element *cur;
	t_element *next;
	
	cur = list->head;
	while (cur->next != NULL)
	{
		next = cur->next; 
		while (next)
		{
			if (next->data == cur->data)
				return (1);
			next = next->next;
		}
		cur = cur->next;	
	}
	return (0);
}
