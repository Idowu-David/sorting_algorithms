#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble Sort Algorithm
 * @array: a pointer to the array of integers
 * @size: size of the array.
 * Return: nothing, void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int flag = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				flag = 1;
				print_array(array, size);
			}
		}
	if (flag == 0)
	break;
	}
}
