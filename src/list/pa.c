/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:30:23 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/25 15:15:22 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void pa(t_list *head_a, t_list *head_b)
{
	if (head_b->size == 0)
		return;
	int data;

	data = list_shift(head_b);
	add_front(head_a, data);
}
