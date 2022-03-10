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

// t_list *last_elem(t_list *head_a_a)
// {
// 	while (head_a->next != NULL)
// 	{
// 		head_a = head_a->next;
// 	}
// 	return head_a;
// }

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
	t_list *list_a;
	t_list *list_b;
	int *arr;
	int *tmp;
	int *lis;
	int **pos;

	list_a = list_new();
	list_b = list_new();
	if (ac >= 2)
	{
		//check the dup
		fill_list(list_a, ac, av);
		arr = list_to_array(list_a);
		tmp = set_tmp(arr, list_a->size);

		int len;
		lis = ft_lis(tmp, &len, list_a->size);
		// int i = 0;
		// while (i < len)
		// {
		// 	printf("[lis]%d\n", lis[i++]);
		// }

		// int j;
		set_list_b(list_a, list_b, lis, len);
		// print_list(list_b);
		// printf("\n ---------------------------------test a \n");
		// print_list(list_a);
		int best_elem = 0;
		while (list_b->size)
		{

			pos = set_positions(list_a, list_b);
			best_elem = best_element(pos, list_b->size);
			// printf("size B %d", list_b->size);
			// print_positions(pos, list_b->size);
			// printf("\nBEST_ELEM %d\n  ", best_elem);
			move_be(list_a, list_b, pos[best_elem]);
			// printf("\n ---------------------------------changes B  \n");
			// print_list(list_b);
			// printf("\n ---------------------------------changes A \n");
			// print_list(list_a);
		}
		int min_pos = min_list_pos(list_a);
		// printf("min pos %d", min_pos);
		if (min_pos <= list_a->size / 2)
		{
			while (min_pos--)
			{
				ra(list_a);
				printf("ra\n");
			}
		}
		else
		{
			min_pos = list_a->size - min_pos;
			while (min_pos--)
			{
				rra(list_a);
				printf("rra\n");
			}
		}

		// printf("\n ---------------------------------test a \n");
		// print_list(list_b);
		// printf("\n ---------------------------------test  a\n");
		// print_list(list_a);
	}

	return 0;
}
