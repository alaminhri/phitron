#include <stdio.h>

int main()
{
    int n, i, sum = 0, sign = 1;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += sign * i;
        sign = -sign;
        if (i % 3 == 0)
        {
            sign = -sign;
        }
    }
    printf("The sum of the Nth element is: %d\n", sum);
    return 0;
}
