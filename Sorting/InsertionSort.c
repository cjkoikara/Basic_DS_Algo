
/* Insertion sort
   On every iteration, an element is selected and is placed at the right position to a new list.
*/
#include <stdio.h>
#include <stdlib.h>
int *insertion_sort(int ar[], int size)
{
    int i = 0, j = 0;
    int temp = 0;
    int *res_array = (int *)malloc(size * sizeof(int));
    res_array[0] = ar[0];
    for (i = 1; i < size; i++)
    {
        int current = ar[i];
        // insert every element in the right order to the result array
        for (j = 0; j <= i; j++)
        {
            if (current < res_array[j])
            {
                while (j < i)
                {
                    temp = res_array[j];
                    res_array[j] = current;
                    current = temp;
                    j++;
                }
            }
            res_array[i] = current;
        }
    }
    return res_array;
}
int main()
{
    int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int *res1 = insertion_sort(array, 10);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\t", res1[i]);
    }
    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("\n");
    int *res2 = insertion_sort(array1, 10);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\t", res2[i]);
    }
    int array2[10] = {2, 4, 5, 6, 2, 1, 5, 8, 12};
    printf("\n");
    int *res3 = insertion_sort(array2, 10);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\t", res3[i]);
    }
}
/* missed stdlib header for malloc
   if (current < res_array[j])
   missed call the function with a pointer to hold the return array
   iter2: Missed to update the res_array incase where no shifting is needed
*/