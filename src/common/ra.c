/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:28:29 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 14:47:39 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	ra(t_list *list)
{
	int	data;
	int	m_data;

	if (list->size <= 1)
		return ;
	m_data = list->head->m_data;
	data = list_shift(list);
	add_back(list, data, m_data);
}
