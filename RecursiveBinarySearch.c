/* Binary search
    Searching in a sorted array
    The key concept is
*/
#include <stdio.h>
#include <stdbool.h>

bool binary_search(int arr[], int low, int high, int key)
{
    int mid = (low + high) / 2;

    if(low > high)
        return false;
    else
    {
        if (arr[mid] == key)
        {
            return true;
        }
        else if (arr[mid] < key)
        {
            // search in the second half
            return binary_search(arr,mid + 1, high, key);
        }
        else
        {
            // search in the first half
            return binary_search(arr,low, mid - 1, key);
        }
    }
}

void main()
{
    /*Test case 1*/
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int key = 1;
    binary_search(array,0,9, key) ? printf("Key found\n") : printf("Key not found\n");
    /*Test case 2*/
    key = 13;
    binary_search(array,0,9, key) ? printf("Key found\n") : printf("Key not found\n");
    /*Test case 2*/
    key = 12;
    binary_search(array,0,9, key) ? printf("Key found\n") : printf("Key not found\n");
    /*Test case 2*/
    key = 2;
    binary_search(array,0,9, key) ? printf("Key found\n") : printf("Key not found\n");
}
/* mistakes I made
iter 1 : redefinition of low and high 
iter 2 : 1. Forgot to return binary_search in left and right half, instead just made call to those functions
         2. Termination condition should have been low>=high, but put it to be low<=high
iter 3 : 1.Thermination condition should have been low>high no =
         2. High should be the hightest index of array, not lenght of array.

*/