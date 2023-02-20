#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using the Bubble sort algorithm
 * @array: pointer to the unsorted array
 * @size: size of the array
 * Return: none(void)
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	if (size <= 2 || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = 1;
			}
			else
				continue;
		if (swapped == 0)
			return;
		}
	}
}

/**
 * swap - swaps the position of two integers in an arrat
 * @a: first node
 * @b: second node
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
