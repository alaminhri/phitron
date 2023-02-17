/*You are given an integer n . Now print the sum of first n natural numbers.
For example n=5 , that means sum of first n natural number is 15(1+2+3+4+5) .
Implement it using recursion.
Sample Input: Sample Output:*/
#include <stdio.h>

int sum(int n)
{

    if (n == 0)
    {
        return 0;
    }

    int s = sum(n - 1);
    int p = n;
    return p + s;
}
int main()
{
    int n;
    scanf("%d", &n);
    int s = sum(n);
    printf("%d", s);
    return 0;
}
