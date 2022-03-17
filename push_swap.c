/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:44:25 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 15:11:52 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "lis.h"
#include "lib.h"
#include "get_next_line.h"
#include "checker.h"
#include "common.h"

int	main(int ac, char *av[])
{
	t_list	*list_a;
	t_list	*list_b;

	if (ac >= 2)
	{	
		list_a = list_new();
		if (!list_a)
			exit(1);
		list_b = list_new();
		if (!list_b)
			free_exit(&list_a, &list_b, 1, "Error\n");
		fill_list(list_a, ac, av);
		if (is_dup(list_a))
			free_exit(&list_a, &list_b, 1, "Error\n");
		if (is_sorted(list_a))
			free_exit(&list_a, &list_b, 0, "");
		ft_push_swap(list_a, list_b);
	}
	return (0);
}
