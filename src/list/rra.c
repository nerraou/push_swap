/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:27:01 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/24 17:28:08 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void rra(t_list *list)
{
	if (list->size <= 1)
		return;
	int data;

	data = list_pop(list);
	add_front(list, data);
}