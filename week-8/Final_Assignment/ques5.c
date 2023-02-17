#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    int *arr;

    scanf("%d", &N);

    arr = (int *)malloc(N * sizeof(int));

    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}