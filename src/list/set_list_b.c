/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_list_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:15:19 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/07 18:47:26 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

//could be used elsewhere
static void dummy_function(t_list *list_a, int i)
{
	int j;

	j = i;
	if (i <= list_a->size / 2)
	{
		while (j--)
		{
			ra(list_a);
			write(1, "ra\n", 3);
		}
	}
	else
	{
		while (j--)
		{
			rra(list_a);
			write(1, "rra\n", 4);
		}
	}
}

void set_list_b(t_list *list_a, t_list *list_b, int *lis, int len)
{
	t_element *node;
	int i;

	node = list_a->head;
	i = 0;
	while (i < list_a->size)
	{
		if (!is_exist(lis, len, node->data))
		{
			dummy_function(list_a, i);
			pb(list_a, list_b);
			write(1, "pb\n", 3);
			node = list_a->head;
			i = 0;
		}
		else
		{
			node = node->next;
			i++;
		}
	}
}