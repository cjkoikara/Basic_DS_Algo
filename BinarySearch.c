/* Binary search
    Searching in a sorted array
    The key concept is
*/
#include <stdio.h>
#include <stdbool.h>

bool binary_search(int arr[], int key)
{
    int low = 0;
    int high = 9;
    int mid = (low + high) / 2;

    while (low <= high)
    {
        if (arr[mid] == key)
        {
            return true;
        }
        else if (arr[mid] < key)
        {
            // search in the second half
            low = mid + 1;
        }
        else
        {
            // search in the first half
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }
    return false;
}

void main()
{
    /*Test case 1*/
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int key = 1;
    binary_search(array, key) ? printf("Key found\n") : printf("Key not found\n");
    /*Test case 2*/
    key = 13;
    binary_search(array, key) ? printf("Key found\n") : printf("Key not found\n");
    /*Test case 2*/
    key = 12;
    binary_search(array, key) ? printf("Key found\n") : printf("Key not found\n");
    /*Test case 2*/
    key = 2;
    binary_search(array, key) ? printf("Key found\n") : printf("Key not found\n");
}
/* mistakes I made
iter 1 : Missed to specify the return type of binary_search
iter 2 : while loop condition was  (low < high)  instead of low<=high
        Explain the failure case.
iter 3 : high should be max index of array, not the size of array.
*/