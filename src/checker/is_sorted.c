/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:00:03 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/26 13:30:57 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int is_sorted(t_list *list)
{
	t_element *cur;

	cur = list->head;
	if (!cur)
		return (0);
	while (cur->next)
	{
		if (cur->data >= cur->next->data)
			return (0);
		cur = cur->next;
	}
	return (1);
}
