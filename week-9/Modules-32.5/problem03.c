/*You are given an integer n . Now print 1 to n . Implement it using recursion.
Sample Input : Sample Output :
5 1 2 3 4 5*/
#include<stdio.h>

void Print(int i, int n)
{
    if (i>n)
    {
        return ;
    }
    
    printf("%d ",i);
    Print(i+1,n);
}
int main ()
{
    int n;
    scanf("%d",&n);
    Print(1,n);
    return 0;
}