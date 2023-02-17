// fibonacci without array
#include <stdio.h>

int main()
{
    int first = 0, second = 1;
    int i, n, t;
    scanf("%d", &n);
    printf("%d %d ", first, second);
    for (i = 1; i < n - 1; i++)
    {
        t = first + second;
        first = second;
        second = t;
        printf("%d ", t);
    }

    return 0;
}