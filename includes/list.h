/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:05:05 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 15:08:38 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "lib.h"

typedef struct s_element
{
	int					data;
	int					m_data;
	struct s_element	*next;
	struct s_element	*prev;
}				t_element;

typedef struct s_list
{
	t_element	*head;
	t_element	*tail;
	int			size;
}				t_list;

t_element	*node_new(int value, int m_data);

t_list		*list_new(void);

int			list_shift(t_list *list);
int			list_pop(t_list *list);
int			is_exist(int *arr, int size, int elem);
int			max_list_pos(t_list *list);
int			min_list_pos(t_list *list);
int			inst_to_pos(t_list *list_a, int data);
int			inst_to_top(int pos, int size);
int			element(int *arr);
int			best_element(int **arr, int size);

void		add_front(t_list *list, int new_data, int m_data);
void		add_back(t_list *list, int new_data, int m_data);
void		set_list_b(t_list *list_a, t_list *list_b, int *lis, int len);
void		move_be(t_list *list_a, t_list *list_b, int *be);
void		sort_three(t_list *list_a);
void		sort_five(t_list *list_a, t_list *list_b);
void		list_del(t_list **list);
void		free_exit(t_list **list_a, t_list **list_b, int exit, char *str);
void		map_values(t_list *list, int *map);

void		ft_set_list_b(t_list *list_a, t_list *list_b);
void		ft_push_swap(t_list *list_a, t_list *list_b);
void		set_map(t_list *list_a, t_list *list_b);
void		move_best_element(t_list *list_a, t_list *list_b);
void		min_to_top(t_list *list_a);

int			**set_positions(t_list *list_a, t_list *list_b);

#endif
