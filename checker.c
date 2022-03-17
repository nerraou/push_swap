/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:44:49 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 16:21:06 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "get_next_line.h"
#include "checker.h"
#include "common.h"

static void	ft_apply(t_list *list_a, t_list *list_b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (!is_action(line))
			free_exit(&list_a, &list_b, 1, "Error\n");
		apply(line, list_a, list_b);
		free(line);
		line = get_next_line(0);
	}
}

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
		fill_list(list_a, list_b, ac, av);
		if (is_dup(list_a))
			free_exit(&list_a, &list_b, 1, "Error\n");
		ft_apply(list_a, list_b);
		if (!is_empty(list_b) || !is_sorted(list_a))
			free_exit(&list_a, &list_b, 1, "KO\n");
		free_exit(&list_a, &list_b, 0, "OK\n");
	}
	return (0);
}
