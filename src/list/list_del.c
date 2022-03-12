/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_del.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:37:40 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/12 13:45:44 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void list_del(t_list **list)
{
	t_element *node;
	t_element *next;

	node = (*list)->head;
	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
	free(*list);
	*list = NULL;
}
