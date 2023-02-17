#include <stdio.h>
void rec(int n)
{

    printf("%d ", n);
    if (1 >= n)
        return;
    rec(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    rec(n);
    return 0;
}