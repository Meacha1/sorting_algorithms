#include <stdio.h>

void bubble_sort(int *array, size_t size)
{
    size_t i,j,k;
    
    for(k = 0; k < size; k++)
    {
        for(i = 0; i < size ; i++)
        {
            if (array[i] > array[i+1])
                {
                    j = array[i];
                    array[i] = array[i+1];
                    array[i+1] = j;
                    print_array(array, size);
                }
        }
    }
}
void print_array(int *array, size_t size)
{
    size_t i;
    for(i = 0; i < size; i++)
    printf("%d ", array[i]);
    printf("\n");
}
