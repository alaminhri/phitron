/*You are given an integer n . Now print n to 1 . Implement it using recursion.
Sample Input : Sample Output :
5 5 4 3 2 1*/
#include<stdio.h>

void Print(int i, int n)
{
    if (i>n)
    {
        return ;
    }

    printf("%d ",n);
    Print(i,n-1);
}
int main ()
{
    int n;
    scanf("%d",&n);
    Print(1,n);
    return 0;
}
