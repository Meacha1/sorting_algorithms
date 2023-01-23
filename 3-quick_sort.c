include "sort.h"

void quick_sort(int *array, size_t size)
{
    quick_sort_recursion(array, 0, size - 1);
}
int array_size(int *array)
{
    int i;
    for (i = 0; array[i]; i++)
    ;
    return i - 3;
}
int quick_sort_recursion(int *array, int low, int high)
{
    if (low < high)
    {
        int pivot_index = partition(array,low, high);
        quick_sort_recursion(array, low, pivot_index - 1);
        quick_sort_recursion(array, pivot_index + 1, high);
       
    }
}
int partition(int *array, int low, int high)
{
    int size = high - low + 1;
    int i, j, k, tmp;
    i = low;
    j = high - 1;
    int n = 10;
    for (k = low; k < size + low - 1; k++)
    {
        if (array[k] > array[high] && j > 0)
        j--;
        else if(array[k] < array[high])
        {
            tmp = array[k];
            array[k] = array[i];
            array[i] = tmp;
            i++;
        }
    }
    tmp = array[i];
    array[i] = array[high];
    array[high] = tmp;
    print_array(array, n);
    return i;
}
