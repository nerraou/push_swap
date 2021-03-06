/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:16:34 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 14:29:30 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	sa(t_list *list)
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
