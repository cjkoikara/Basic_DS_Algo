/* Program to implement linear search
   Linear search is the process of searching 
   by matching every element in the list 
   sequentially one by one to items to be matched
*/
#include <stdio.h>
#include <stdbool.h>
bool linear_search(int ar[], int key)
{
    int index = 0;
    for (index = 0; index < 10; index++)
    {
        if (key == ar[index])
            return true;
    }
    return false;
}
void main()
{
    /*Test case 1*/
    int array[10] = {2, 4, 5, 6, 2, 1, 5, 8, 12};
    int key = 1;
    linear_search(array, key) ? printf("Key found\n") : printf("Key not found\n");
    /*Test case 2*/
    key = 13;
    linear_search(array, key) ? printf("Key found\n") : printf("Key not found\n");
    /*Test case 2*/
    key = 12;
    linear_search(array, key) ? printf("Key found\n") : printf("Key not found\n");
    /*Test case 2*/
    key = 2;
    linear_search(array, key) ? printf("Key found\n") : printf("Key not found\n");
}

/* Mistakes I made
Iter 1: Din't include stdbool.h has to be included.
*/