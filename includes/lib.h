/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:33:06 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/15 20:32:04 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
#define LIB_H

#include <unistd.h>

void ft_putstr(const char *str);
int ft_min(int n1, int n2);
int ft_abs(int num);
void ft_swap(int *a, int *b);
void ft_bubbelsort(int *arr, int size);
int ft_i_indexof(int *arr, int size, int data);

#endif