/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:37:40 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 14:26:58 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	sb(t_list *list)
{
	t_element	*tmp;

	if (list->size <= 1)
		return ;
	tmp = list->head;
	if (tmp != NULL && tmp->next != NULL)
	{
		ft_swap(&tmp->data, &tmp->next->data);
		ft_swap(&tmp->m_data, &tmp->next->m_data);
	}
}
