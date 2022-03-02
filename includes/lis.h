/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:42:11 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/02 16:06:08 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIS_H
#define LIS_H

#include <stdlib.h>

int max_index(int arr[], int n);
int *set_array_value(int size, int value);
int *lis_array(int *sub_s, int *arr, int *length, int size);
int *ft_lis(int *arr, int size);

void check_and_set(int *arr, int *sub_s, int *length, int size);
void free_all(int *sub_s, int *arr, int *lenght);

#endif