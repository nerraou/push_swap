/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:16:34 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/24 13:55:00 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void sa(t_list *list)
{
	if (list->size <= 1)
		return;
	t_element *tmp;

	tmp = list->head;
	if (tmp != NULL && tmp->next != NULL)
		ft_swap(&tmp->data, &tmp->next->data);
}
