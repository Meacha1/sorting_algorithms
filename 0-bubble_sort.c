#include <stdio.h>

/**
 * bubble_sort - sort the array and print each step
 * @size: size of the array
 * @array: the array to be sorted
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (k = 0; k < size; k++)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				j = array[i];
				array[i] = array[i + 1];
				array[i + 1] = j;
				print_array(array, size);
			}
		}
	}
}
