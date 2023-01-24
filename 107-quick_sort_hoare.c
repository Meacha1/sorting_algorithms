#include "sort.h"

/**
 * make_swap - swap the values of two gived elements of an array
 * @left_index: pointer to first index
 * @right_index: pointer to second index
 * Return: Nothing
 */
void make_swap(int *left_index, int *right_index)
{
	int tmp = *left_index;

	*left_index = *right_index;
	*right_index = tmp;
}

/**
 * hoare_partition - Finds the partition using hoare (with 2 pointers)
 * @array: Array to sort
 * @first_index: inferior limit
 * @last_index: superior limit
 * @size: Size of the array
 * Return: value of partition for the next iteration
 */
int hoare_partition(int *array, int first_index, int last_index, size_t size)
{
	int pivot = array[last_index], left_pointer, right_pointer;

	left_pointer = first_index - 1;
	right_pointer = last_index + 1;

	while (left_pointer < right_pointer)
	{
		left_pointer++;
		while (array[left_pointer] < pivot)
			left_pointer++;
		right_pointer -= 1;
		while (array[right_pointer] > pivot)
			right_pointer--;
		if (left_pointer < right_pointer)
		{
			make_swap(array + left_pointer, array + right_pointer);
			print_array(array, size);
		}
	}
	return (left_pointer);
}

/**
 * quick_sort_recurtion_hoare - implementing the quick_sort algorithm
 * @array: Array to sort
 * @first_index: inferior limit
 * @last_index: superior limit
 * @size: Size of the array
 * Return: Nothing
 */
void quick_sort_recurtion_hoare(int *array, int first_index,
								int last_index, size_t size)
{
	int partition;

	if (last_index - first_index <= 0)
		return;

	partition = hoare_partition(array, first_index, last_index, size);
	quick_sort_recurtion_hoare(array, first_index, partition - 1, size);
	quick_sort_recurtion_hoare(array, partition, last_index, size);
}

/**
 * quick_sort_hoare - sorts an array of integers
 *  in ascending order using the Quick sort algorithm
 * @array: Array to sort
 * @size: Size of the array
 * Return: Nothing
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recurtion_hoare(array, 0, size - 1, size);
}
