#include <stdio.h>
void sum_total(int b[], int x)
{
    int i, a;
    a = Divisible_3(b, x) + Divisible_5(b, x);
    if (a > 0)
    {
        printf("%d", a);
    }
    else
        printf("-1");
}
int Divisible_3(int c[], int l)
{
    int i, s = 0;
    for (i = 0; i < l; i++)
    {
        if (c[i] % 3 == 0 && c[i] % 5 != 0)
        {
            s++;
        }
    }
    return s;
}
int Divisible_5(int d[], int l)
{
    int i, s = 0;
    for (i = 0; i < l; i++)
    {
        if (d[i] % 5 == 0)
        {
            s++;
        }
    }
    return s;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    sum_total(a, n);

    return 0;
}
