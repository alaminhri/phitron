#include <stdio.h>
void rec(int i, int n)
{
    if (i > n)
        return;
    printf("%d", i);
    rec(i + 1, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    rec(1, n);
    return 0;
}