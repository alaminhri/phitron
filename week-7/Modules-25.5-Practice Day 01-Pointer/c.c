/*You have given positive integer N, the size of an array as input.
Take an array of size N as input. Now your task to
print this array. Implement this by using pointers.*/

#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int N, i;
    int * ptr = arr;    // Pointer to arr[0] 

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);

        // Move pointer to next array element
        ptr++;   
    }

    // Make sure that pointer again points back to first array element
    ptr = arr;

    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
        // Print value pointed by the pointer
        printf("%d ", *ptr);

        // Move pointer to next array element
        ptr++;
    }

    return 0;
}