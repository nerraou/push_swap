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

// t_list *last_elem(t_list *head)
// {
// 	while (head->next != NULL)
// 	{
// 		head = head->next;
// 	}
// 	return head;
// }

int main()
{
	t_list *head;
	//t_list *last;

	head = list_new();
	add_front(head, 5);
	add_front(head, 2);
	add_front(head, 3);
	//add_after(head,25);
	add_front(head, 7);
	//add_front(head, 9);
	add_back(head, 0);
	add_back(head, 100);
	//last = last_elem(head);
	print_list(head);
	printf("\n----------\n");
	rra(head);
	print_list(head);
	//print_rev(head);
	return 0;
}
