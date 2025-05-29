#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * using insertion sort
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insert;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		insert = current;
		while (insert->prev && insert->n < insert->prev->n)
		{
			swap_node(list, insert->prev, insert);
			print_list(*list);
		}
		current = current->next;
	}
}

/**
 * swap_node - Swaps two adjacent nodes in a doubly linked list
 * @list: Double pointer to the head of the list
 * @node1: The first node
 * @node2: The second node (must be node1->next)
 */
void swap_node(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (!node1 || !node2 || node1->next != node2)
		return;

	node1->next = node2->next;
	if (node2->next)
		node2->next->prev = node1;

	node2->prev = node1->prev;
	node2->next = node1;

	if (node1->prev)
		node1->prev->next = node2;
	else
		*list = node2;

	node1->prev = node2;
}
