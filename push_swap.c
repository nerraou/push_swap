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
		int i = 0;
		int j;
		set_list_b(list_a, list_b, lis, len);
		pos = set_positions(list_a, list_b);
		while (i < list_b->size)
		{
			j = 0;
			while (j < 2)
			{
				printf("[pos]%d  ", pos[i][j]);
				j++;
			}
			printf("\n");
			i++;
		}

		//print_list(list_b);
	}
	//printf("\n test \n");
	return 0;
}
