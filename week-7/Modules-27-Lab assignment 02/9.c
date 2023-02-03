#include <stdio.h>
int Prime(int *a, int size)
{
    int i, j, k = 0, c = 0;
    for (i = 0; i < size; i++)
    {

        for (j = 2; j < *(a + i); j++)
        {
            if (*(a + i) % j == 0)
            {
                k = 1;
            }
        }
        if (k == 0)
        {
            c++;
        }
        k = 0;
    }
 
    return c;
}
float even_avg(int *b, int size)
{
    int i, avg = 0;
    for (i = 0; i < size; i++)
    {
        if (*(b + i) % 2 == 0)
        {
            avg = avg + *(b + i);
        }
    }
    return avg/2;
}

int main()
{
    int i, n;
    scanf("%d", &n);
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int a = Prime(ar, n);

    printf("Prime numbers: %d\n", a);

    float b = even_avg(ar, n);
    printf("Average of all even integers: %.2f\n", b);
    return 0;
}
