#include <stdio.h>
void Consecutive_Even_Numbers()
{
    int n, i;
    scanf("%d", &n);
    int x = ((n / 4) - 3);
    if (x % 2 == 0)
    {
        for (i = 0; i < 4; i++)
        {
            printf("%d ", x);
            x += 2;
        }
    }
}
int main()
{
    int N, T, i;

    for (i = 0; i < T; i++)
    {
        Consecutive_Even_Numbers();
    }

    return 0;
}
