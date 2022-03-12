#include "list.h"
#include "lis.h"
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

void print_positions(int **arr, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("pos{%d, %d}\n", arr[i][0], arr[i][1]);
		i++;
	}
}

int main(int ac, char *av[])
{

	if (ac >= 2)
	{
		t_list *list_a;
		t_list *list_b;

		list_a = list_new();
		list_b = list_new();
		fill_list(list_a, ac, av);
		if (is_sorted(list_a))
			free_exit(&list_a, &list_b, 0);
		else if (list_a->size == 3)
			sort_three(list_a);
		else if (list_a->size == 5)
			sort_five(list_a, list_b);
		else
		{
			int *arr;
			int *tmp;
			int *lis;
			int **pos;
			int size;

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
			int len;
			lis = ft_lis(tmp, &len, list_a->size);
			if (!lis)
			{
				free_all(arr, tmp, lis);
				free_exit(&list_a, &list_b, 1);
			}
			set_list_b(list_a, list_b, lis, len);
			free(lis);
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
			int min_pos = min_list_pos(list_a);
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
		free_exit(&list_a, &list_b, 0);
	}
	return 0;
}
