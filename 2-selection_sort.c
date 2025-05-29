#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the `Selection sort` algorithm
 * @array: a pointer to the array
 * @size: the size of the array
 * Return: nothing, void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}