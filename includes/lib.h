/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:33:06 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 10:07:20 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <unistd.h>

int		ft_min(int n1, int n2);
int		ft_abs(int num);
int		ft_i_indexof(int *arr, int size, int data);

void	ft_putstr(const char *str);
void	ft_swap(int *a, int *b);
void	ft_bubbelsort(int *arr, int size);

#endif