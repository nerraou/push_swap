#include "list.h"
#include "lis.h"
#include "lib.h"
#include "get_next_line.h"
#include "checker.h"
#include "common.h"

void print_list(t_list *list)
{
	t_element *elem;

	elem = list->head;
	while (elem != NULL)
	{
		printf("[]%d\n", elem->data);
		elem = elem->next;
	}
}

void print_rev(t_list *list)
{
	t_element *cur;

	cur = list->tail;
	while (cur != NULL)
	{
		printf("[]%d\n", cur->data);
		cur = cur->prev;
	}
}
// it' gonna go with move_best_element
void free_pos(int **pos, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		free(pos[i]);
		i++;
	}
	free(pos);
}

// set the map and m_data;
void set_map(t_list *list_a,t_list *list_b)
{
	int		*map;
	map = (int *)malloc(sizeof(int) * list_a->size);
	if (!map)
		return ;
	map = list_to_array(list_a);
	if(!map)
	{
		free(map);
		free_exit(&list_a, &list_b, 1);
	}
	ft_bubbelsort(map, list_a->size);
	map_values(list_a, map);
}

//set lit and the list b
void ft_set_list_b(t_list *list_a, t_list *list_b)
{
	int *arr;
	int *tmp;
	int *lis;
	arr = list_to_array(list_a);
	if (!arr)
		free_exit(&list_a, &list_b, 1);
	tmp = set_tmp(arr, list_a->size);
	if (!tmp)
	{
		free(arr);
		free_exit(&list_a, &list_b, 1);
	}
	free(arr);
	int len_lis;
	lis = ft_lis(tmp, &len_lis, list_a->size);
	if (!lis)
	{
		free_all(arr, tmp, lis);
		free_exit(&list_a, &list_b, 1);
	}
	set_list_b(list_a, list_b, lis, len_lis);
	free(lis);
}
// move best element
void move_best_element(t_list *list_a, t_list *list_b)
{

	int **pos;
	int size;
	int best_elem = 0;
	while (list_b->size)
	{
		pos = set_positions(list_a, list_b);
		if (!pos)
			free_exit(&list_a, &list_b, 1);
		best_elem = best_element(pos, list_b->size);
		size = list_b->size;
		move_be(list_a, list_b, pos[best_elem]);
		free_pos(pos, size);
	}

}

//move the min value to the top of list 
void min_to_top(t_list *list_a)
{
	int min_pos;

	min_pos = min_list_pos(list_a);
	if (min_pos <= list_a->size / 2)
	{
		while (min_pos--)
		{
			ra(list_a);
			ft_putstr("ra\n");
		}
	}
	else
	{
		min_pos = list_a->size - min_pos;
		while (min_pos--)
		{
			rra(list_a);
			ft_putstr("rra\n");
		}
	}
}
// global push swap
void push_swap(t_list *list_a, t_list *list_b)
{
	 if (list_a->size == 3)
			sort_three(list_a);
	else if (list_a->size == 5)
		sort_five(list_a, list_b);
	else
	{
		set_map(list_a, list_b);
		ft_set_list_b(list_a, list_b);
		move_best_element(list_a, list_b);
		min_to_top(list_a);
	}
	free_exit(&list_a, &list_b, 0);
}

int main(int ac, char *av[])
{
	if (ac >= 2)
	{
		t_list	*list_a;
		t_list	*list_b;
		
		list_a = list_new();
		if (!list_a)
			exit(1);
		list_b = list_new();
		if (!list_b)
			free_exit(&list_a, &list_b, 1);
		fill_list(list_a, ac, av);
		if (is_dup(list_a))
		{
			ft_putstr("Error\n");
			free_exit(&list_a, &list_b, 1);
		}
		if (is_sorted(list_a))
			free_exit(&list_a, &list_b, 0);
		push_swap(list_a,list_b);		
	}
	return 0;
}
