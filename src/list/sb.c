/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:37:40 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/25 15:40:00 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void sb(t_list *list)
{
	if (list->size <= 1)
		return;
	t_element *tmp;

	tmp = list->head;
	if (tmp != NULL && tmp->next != NULL)
		ft_swap(&tmp->data, &tmp->next->data);
}
