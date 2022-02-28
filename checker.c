#include "list.h"
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
	char *line;
	t_list *list_a;
	t_list *list_b;

	list_a = list_new();
	list_b = list_new();
	if (ac > 2)
	{
		fill_list(list_a, ac, av);
		line = get_next_line(0);
		while (line)
		{
			if (!is_action(line))
				ft_exit("Error");
			apply(line, list_a, list_b);
			free(line);
			line = get_next_line(0);
		}
		if (!is_empty(list_b) || !is_sorted(list_a))
			ft_exit("KO");
		ft_putstr("OK\n");
	}
	printf("------ list a\n");
	print_list(list_a);
	printf("------ list b\n");
	print_list(list_b);
	return 0;
}
