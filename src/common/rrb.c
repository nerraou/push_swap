/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:55:13 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 14:48:36 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	rrb(t_list *list)
{
	int	data;
	int	m_data;

	if (list->size <= 1)
		return ;
	m_data = list->tail->m_data;
	data = list_pop(list);
	add_front(list, data, m_data);
}
