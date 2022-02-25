/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:05:05 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/25 15:58:27 by nerraou          ###   ########.fr       */
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

void sa(t_list *list);
void sb(t_list *list);
void ss(t_list *list_a, t_list *list_b);

void ra(t_list *list);
void rb(t_list *list);
void rr(t_list *list_a, t_list *list_b);

void rra(t_list *list);
void rrb(t_list *list);
void rrr(t_list *list_a, t_list *list_b);

void pa(t_list *head_a, t_list *head_b);
void pb(t_list *head_a, t_list *head_b);

int list_shift(t_list *list);
int list_pop(t_list *list);

void ft_swap(int *a, int *b);
void add_front(t_list *list, int new_data);
void add_back(t_list *list, int new_data);
#endif
