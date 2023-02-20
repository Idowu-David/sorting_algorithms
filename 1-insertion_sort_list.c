#include "sort.h"

/**
 * insertion_sort_list - sorts a doublt linked
 * list using Insertion Sort algorithm
 * @list: pointer to the list of integers to be sorted
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *curr;

	if (*list == NULL || (*list)->next == NULL || (*list)->next->next == NULL)
		return;
	ptr = *list;
	curr = ptr->next;
	while (1)
	{
		if (ptr->n > curr->n)
		{
			if (ptr->prev == NULL)
			{
				printf("Beginning\n");
				*list = swap_at_beg(ptr, curr);
			}
			else if (curr->next == NULL)
			{
				printf("End\n");
				swap_at_end(ptr, curr);
			}
			else
			{
				printf("Middle\n");
				swap_at_middle(ptr, curr);
			}
			print_list(*list);
			ptr = *list;
			curr = ptr->next;
		}
		else
		{
			ptr = curr;
			if (curr->next != NULL)
				curr = curr->next;
			else
				break;
		}
	}
}

/**
 * swap_at_beg - swaps two nodes at the beginning of a linked list
 * @node1: first node
 * @node2: second node
 * Return: void
 */
listint_t *swap_at_beg(listint_t *node1, listint_t *node2)
{
	listint_t *ptr;

	ptr = node2->next;
	ptr->prev = node1;
	node1->next = ptr;
	node2->next = node1;
	node2->prev = NULL;
	return (node2);
}

/**
 * swap_at_end - swaps two nodes at the end of a
 * linked list
 * @node1: first node
 * @node2: second node
 * Return: void
 */
void swap_at_end(listint_t *node1, listint_t *node2)
{
	listint_t *ptr;

	ptr = node1->prev;
	ptr->next = node2;
	node2->prev = ptr;
	node2->next = node1;
	node1->prev = node2;
	node1->next = NULL;
}

/**
 * swap_at_middle - swaps two nodes at the middle of a
 * linked list
 * @node1: first node
 * @node2: second node
 * Return: void
 */
void swap_at_middle(listint_t *node1, listint_t *node2)
{
	listint_t *back, *forw;

	back = node1->prev;
	forw = node2->next;
	back->next = node2;
	node2->prev = back;
	node2->next = node1;
	node1->prev = node2;
	node1->next = forw;
	forw->prev = node1;
}
