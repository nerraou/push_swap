/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:27:01 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 14:47:52 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	rra(t_list *list)
{
	int	data;
	int	m_data;

	if (list->size <= 1)
		return ;
	m_data = list->tail->m_data;
	data = list_pop(list);
	add_front(list, data, m_data);
}
