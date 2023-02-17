#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];

    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)//eta holo jodi kokhno amr onk mmry lage tokh jodi akshate totogulo space faka na thake tahole sorry dekhabe
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
        free(ptr);
    }

    return 0;
}
