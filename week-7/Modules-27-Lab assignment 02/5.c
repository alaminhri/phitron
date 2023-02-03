#include <stdio.h>
int sum(int a[], int l)
{
    int i, sum = 0, x;
    for (i = 1; i <= l; i++)
    {
        if ((i % 2 == 0 && a[i-1] % 2 == 0) || (i % 2 !=0  && a[i-1] % 2 != 0))
        {
            sum = sum + i + a[i-1];
            printf("%d\n",a[i-1]);
        }
        /*else if(i % 2 == 1 && a[i] % 2 == 1)
        {
            sum = sum + i + a[i];
        }*/
    }
    // printf("%d",sum);
    return sum;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int X = sum(arr, n);
    printf("%d", X);

    return 0;
}