/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:17:00 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/02 16:15:07 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void fill_list(t_list *list, int ac, char *av[])
{
	int i;

	if (is_dup(ac, av))
		ft_exit("Error");
	i = 1;
	while (i < ac)
	{
		if (!is_int(av[i]))
			ft_exit("Error");
		add_back(list, atoi(av[i]));
		i++;
	}
}