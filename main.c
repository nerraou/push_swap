#include "list.h"
#include "get_next_line.h"
#include "checker.h"

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
	t_list *head_a;
	// //t_list *last;
	// t_list *head_b;

	// head_b = list_new();
	head_a = list_new();

	// add_back(head_a, 2);
	// add_back(head_a, 22);
	// add_back(head_a, 45);
	// add_back(head_a, 74);
	// add_back(head_a, 77);
	// add_back(head_a, 78);
	// printf("is action %s\n", g_actions[0]);
	if (ac == 2)
		printf("is action %d\n", is_action(av[1]));
	return 0;
}
