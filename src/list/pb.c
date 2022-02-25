/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:58:43 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/25 16:00:00 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void pb(t_list *head_a, t_list *head_b)
{
	if (head_a->size == 0)
		return;
	int data;

	data = list_shift(head_a);
	add_front(head_b, data);
}
