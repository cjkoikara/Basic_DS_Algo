/* Selection sort
   On every iteration, the smallest element is selected and is placed at the right position.
*/
#include <stdio.h>
void selection_sort(int ar[], int size)
{
    int i = 0, j = 0;
    int temp  = 0;
    for (i = 0; i < 10; i++)
    {
        int curr_min = i;
        for (j = i; j < size; j++)
        {
            if (ar[j] < ar[curr_min])
            {
                curr_min = j;
            }
        }
        // swap
        temp = ar[i];
        ar[i] = ar[curr_min];
        ar[curr_min] = temp;
        
    }
}
int main()
{
    int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selection_sort(array, 10);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\t", array[i]);
    }
    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("\n");
    selection_sort(array1, 10);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\t", array1[i]);
    }
    int array2[10] = {2, 4, 5, 6, 2, 1, 5, 8, 12};
    printf("\n");
    selection_sort(array2, 10);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\t", array2[i]);
    }
}