#include "sort.h"

/**
 * selection_sort - sorts an array of integers
 * in ascending order using the selection sort algorithm
 * @array: an array to be sorted
 * @size: size of an array to be sorted
 */

void selection_sort(int *array, size_t size)
{
	int i, j, k;
	int min = INT_MAX;
	int tmp;

	for (i = 0; i < size - 2; i++)
	{
		min = INT_MAX;
		for (j = i; j < size; j++)
		{
			if (min > array[j])
				min = array[j];
		}
		tmp = array[i];
		array[i] = min;
		for (k = i + 1; k < size; k++)
		{
			if (min == array[k])
				array[k] = tmp;
		}
		print_array(array, size);
	}
}
