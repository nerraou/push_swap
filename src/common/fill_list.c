/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:17:00 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 16:14:10 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	fill_list(t_list *list_a, t_list *list_b, int ac, char *av[])
{
	int		i;
	int		j;
	char	**numbers;

	i = 1;
	while (i < ac)
	{
		numbers = ft_split(av[i], ' ');
		if (!numbers)
			return ;
		j = 0;
		while (numbers[j])
		{
			if (!is_int(numbers[j]))
				free_exit(&list_a, &list_b, 1, "Error\n");
			add_back(list_a, atoi(numbers[j]), -1);
			j++;
		}
		free_2d(numbers);
		i++;
	}
}
