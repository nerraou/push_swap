/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:44:49 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 14:51:35 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "get_next_line.h"
#include "checker.h"
#include "common.h"

static void	check_dup(t_list *list_a, t_list *list_b)
{
	if (is_dup(list_a))
	{
		ft_putstr("Error\n");
		free_exit(&list_a, &list_b, 1);
	}
}

int	main(int ac, char *av[])
{
	char	*line;
	t_list	*list_a;
	t_list	*list_b;

	if (ac >= 2)
	{
		list_a = list_new();
		list_b = list_new();
		fill_list(list_a, ac, av);
		check_dup(list_a, list_b);
		line = get_next_line(0);
		while (line)
		{
			if (!is_action(line))
				ft_exit("Error");
			apply(line, list_a, list_b);
			free(line);
			line = get_next_line(0);
		}
		if (!is_empty(list_b) || !is_sorted(list_a))
			ft_exit("KO");
		ft_putstr("OK\n");
	}
	return (0);
}
