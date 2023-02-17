#include <stdio.h>
int sum(int brr[], int n)
{
    if (0 == n)
    {
        return 0;
    }

    int s = sum(brr + 1, n - 1);
    return s + brr[0];
    // return s + *(brr);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int s = sum(arr, n);
    printf("%d", s);

    return 0;
}
