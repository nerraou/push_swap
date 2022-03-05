/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_action.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:07:13 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/05 15:36:33 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int is_action(const char *str)
{
	if (ft_strcmp(str, "sa") == 0 || ft_strcmp(str, "sb") == 0 ||
		ft_strcmp(str, "ss") == 0)
		return (1);
	if (ft_strcmp(str, "ra") == 0 || ft_strcmp(str, "rb") == 0 ||
		ft_strcmp(str, "rr") == 0)
		return (1);
	if (ft_strcmp(str, "rra") == 0 || ft_strcmp(str, "rrb") == 0 ||
		ft_strcmp(str, "rrr") == 0)
		return (1);
	if (ft_strcmp(str, "pa") == 0 || ft_strcmp(str, "pb") == 0)
		return (1);
	return (0);
}
