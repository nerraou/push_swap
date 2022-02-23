/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:28:00 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/23 15:56:55 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_element *node_new(int value)
{
	t_element	*new_node;
	
	new_node = (t_element *)malloc(sizeof(t_element));
	if (!new_node)
		return (NULL);
	new_node->data = value;
	new_node->next = NULL;
	new_node->prev = NULL; 
	return (new_node);
}