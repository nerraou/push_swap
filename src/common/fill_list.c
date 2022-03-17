/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:17:00 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 18:11:14 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

static void	free_and_exit(t_list *list_a, t_list *list_b, char **numbers)
{
	free_2d(numbers);
	free_exit(&list_a, &list_b, 1, "Error\n");
}

void	fill_list(t_list *list_a, t_list *list_b, int ac, char *av[])
{
	int		i;
	int		j;
	char	**numbers;

	i = 1;
	while (i < ac)
	{
		j = 0;
		numbers = ft_split(av[i], ' ');
		if (!numbers || !numbers[j])
			free_and_exit(list_a, list_b, numbers);
		while (numbers[j])
		{
			if (!is_int(numbers[j]))
				free_and_exit(list_a, list_b, numbers);
			add_back(list_a, atoi(numbers[j]), -1);
			j++;
		}
		free_2d(numbers);
		i++;
	}
}
