/*You are given a positive integer n. The next line will contain n positive integers .
Now calculate the total sum in
the following way –
>> add the last digit of every integers
Implement it using recursion.*/
#include <stdio.h>
int Total_sum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    int s = Total_sum(arr + 1, n - 1);
    return s + (arr[0] % 10);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int s = Total_sum(ar, n);
    printf("%d", s);

    return 0;
}