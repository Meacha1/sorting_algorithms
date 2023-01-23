#include "sort.h"

/**
 * print_array - print all the elements in the array
 * @array: the array to be sorted
 * @size: size of the arrat
 */

void print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
}
