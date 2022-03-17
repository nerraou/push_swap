/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_list_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:09:37 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 15:10:17 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "lis.h"

void	ft_set_list_b(t_list *list_a, t_list *list_b)
{
	int	*arr;
	int	*tmp;
	int	*lis;
	int	len_lis;

	arr = list_to_array(list_a);
	if (!arr)
		free_exit(&list_a, &list_b, 1, "");
	tmp = set_tmp(arr, list_a->size);
	if (!tmp)
	{
		free(arr);
		free_exit(&list_a, &list_b, 1, "");
	}
	free(arr);
	lis = ft_lis(tmp, &len_lis, list_a->size);
	if (!lis)
	{
		free_all(arr, tmp, lis);
		free_exit(&list_a, &list_b, 1, "");
	}
	set_list_b(list_a, list_b, lis, len_lis);
	free(lis);
}
