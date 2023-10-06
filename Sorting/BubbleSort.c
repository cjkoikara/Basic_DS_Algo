/* Bubble sort implemetation*/
#include <stdio.h>

void bubble_sort(int ar[], int count)
{
    int temp;
    for (size_t i = 0; i < count; i++)
    {
        for (size_t j = i + 1; j < count; j++)
        {
            if (ar[i] < ar[j])
            {
                // swap the numbers
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
}
void bubble_sort2(int ar[], int count)
{
    int temp;
    for (size_t i = 0; i < count - 1; i++)
    {
        for (size_t j = 0; j < count - i -1; j++)
        {
            if (ar[j] > ar[j+1])
            {
                // swap the numbers
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
}
int main()
{
    int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubble_sort(array, 10);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\t", array[i]);
    }
    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("\n");
    bubble_sort(array1, 10);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\t", array1[i]);
    }
    int array2[10] = {2, 4, 5, 6, 2, 1, 5, 8, 12};
    printf("\n");
    bubble_sort(array2, 10);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\t", array2[i]);
    }
}

/*Mistakes I made
iter1: bubblesort2 : it should be i<count -1 for terminal condition why?
       Comparison should be between j and j+1 elements. instead of i and i+1. Why?*/