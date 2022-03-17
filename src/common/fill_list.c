/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:17:00 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 12:00:49 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	fill_list(t_list *list, int ac, char *av[])
{
	int		i;
	int		j;
	char	**numbers;

	i = 1;
	while (i < ac)
	{
		numbers = ft_split(av[i], ' ');
		if (!numbers)
			free_2d(numbers, i);
		j = 0;
		while (numbers[j])
		{
			if (!is_int(numbers[j]))
				ft_exit("Error");
			add_back(list, atoi(numbers[j]), -1);
			j++;
		}
		i++;
	}
	free(numbers);
}
