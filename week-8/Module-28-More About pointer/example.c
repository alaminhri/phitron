#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5, i;
    //scanf("%d", &n);
    int a[n];

    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    printf("%p",ptr);

    if (ptr == NULL)
    {
        printf("Sorry,Memoru Allocation Failed");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }

        for (i = 0; i < n; i++)
        {
            printf("%d \n", *(ptr + i));
        }
        //free(ptr);
    }
    n=10;
    ptr = realloc(ptr,  n * sizeof(int));
    printf("%p",ptr);
    if (ptr == NULL)
    {
        printf("Sorry,Memoru Allocation Failed");
    }
    else
    {
        for (i = 5; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }

        for (i = 0; i < n; i++)
        {
            printf("%d \n", *(ptr + i));
        }
        free(ptr);
    }


    return 0;
}
