/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:30:23 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 14:48:28 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	pa(t_list *head_a, t_list *head_b)
{
	int	data;
	int	m_data;

	if (head_b->size == 0)
		return ;
	m_data = head_b->head->m_data;
	data = list_shift(head_b);
	add_front(head_a, data, m_data);
}
