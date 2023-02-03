#include <stdio.h>
void Favourite_num(int *a, int size)
{
    int i, x, y = 0, z, l;
    for (i = 0; i < size; i++)
    {
        l = *(a + i);
        while (l != 0)
        {
            x = l % 10;
            if (x == 7)
            {
                y++;
            }
            l = l / 10;
        }
    }
    if (size % 2 == 0)
    {
        z = size / 2;
        if (y >= z)
        {
            printf("Beautiful\n");
        }
        else
            printf("Ugly\n");
    }
    else
    {
        z = (size / 2) + 1;
        if (y >= z)
        {
            printf("Beautiful\n");
        }
        else
        printf("Ugly\n");
    }
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    Favourite_num(ar, n);
    return 0;
}