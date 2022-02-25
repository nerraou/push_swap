#include "list.h"

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

int main()
{
	t_list *head_a;
	//t_list *last;
	t_list *head_b;

	head_b = list_new();
	head_a = list_new();

	add_back(head_a, 2);
	add_back(head_a, 22);
	add_back(head_a, 45);
	add_back(head_a, 77);
	add_back(head_a, 78);
	add_back(head_a, 74);
	printf("--------list befor sa\n");
	print_list(head_a);
	//sa(head_a);
	//printf("--------list after sa\n");
	//print_list(head_a);

	add_back(head_b, 1);
	add_back(head_b, 4);
	add_back(head_b, 5);
	add_back(head_b, 125);
	add_back(head_b, 532);
	add_back(head_b, 51);
	printf("--------list befor sb\n");
	print_list(head_b);
	//	sa(head_b);
	//	printf("--------list after sb\n");
	//	print_list(head_b);

	ss(head_a, head_b);
	printf("--------list after sa\n");
	print_list(head_a);
	printf("--------list after sb\n");
	print_list(head_b);
	return 0;
}
