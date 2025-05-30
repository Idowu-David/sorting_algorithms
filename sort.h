#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * swap - swaps two integers
 * @a: first integer
 * @b: second integer
 * Return: nothing, void
 */

static inline void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void swap(int *a, int *b);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void insertion_sort_list(listint_t **list);
void swap_node(listint_t **list, listint_t *node1, listint_t *node2);
void selection_sort(int *array, size_t size);
#endif
