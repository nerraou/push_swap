/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:05:05 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/24 17:30:53 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_element
{
	int data;
	struct s_element *next;
	struct s_element *prev;
} t_element;

typedef struct s_list
{
	t_element *head;
	t_element *tail;
	int size;
} t_list;

t_element *node_new(int value);
t_list *list_new(void);

void rra(t_list *list);
void sa(t_list *list);
void ra(t_list *list);

int list_shift(t_list *list);
int list_pop(t_list *list);

void ft_swap(int *a, int *b);
void add_front(t_list *list, int new_data);
void add_back(t_list *list, int new_data);
#endif
