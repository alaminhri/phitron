/*You are given two positive integers n and m . Now calculate the value of n to the power m using recursion.
Sample Input : Sample Output :
2 5 32*/
#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    int p = power(a, b - 1);
    return a * p;
}
int main()
{
    int m, n;
    scanf("%d %d", &n, &m);
    int p = power(n, m);
    printf("%d ",p);
    return 0;
}