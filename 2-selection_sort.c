#include "sort.h"

/**
 * selection_sort - sorts an array of integers
 * in ascending order using the selection sort algorithm
 * @array: an array to be sorted
 * @size: size of an array to be sorted
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_idx;
	int tmp;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;

		if (i != min_idx)
		{
			tmp = array[min_idx];
			array[min_idx] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
