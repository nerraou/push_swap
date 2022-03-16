/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:58:43 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 14:47:33 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	pb(t_list *head_a, t_list *head_b)
{
	int	data;
	int	m_data;

	if (head_a->size == 0)
		return ;
	m_data = head_a->head->m_data;
	data = list_shift(head_a);
	add_front(head_b, data, m_data);
}
