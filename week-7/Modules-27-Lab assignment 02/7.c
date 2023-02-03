#include <stdio.h>
void swap(int *br[], int *cr[])
{
    int *temp;
    temp = *br;
    *br = *cr;
    *cr = temp;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int ar[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int q;
    scanf("%d", &q);
    for (i = 1; i <= q; i++)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        swap(&ar[l], &ar[r]);
    }
    printf("Modified array is : \n");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}