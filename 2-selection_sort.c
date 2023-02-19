#include "sort.h"

/**
 * selection_sort - sorts an array of integers using the Selection sort algorithm
 * @array: pointer to the array of integers
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int *least = NULL, check_swap;
	size_t i, j;

	if (size <= 2)
		return;
	for (i = 0; i < size; i++)
	{
		check_swap = 0;
		least = &array[i];
		for (j = i + 1; j < size; j++)
		{
			if (*least > array[j])
			{
				least = &array[j];
				check_swap = 1;
			}
		}
		swap(least, &array[i]);
		if (check_swap)
			print_array(array, size);
	}
}

/**
 * swap - swaps two integers in an array
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap(int *a, int *b)
{
        int temp = *a;

        *a = *b;
        *b = temp;
}
