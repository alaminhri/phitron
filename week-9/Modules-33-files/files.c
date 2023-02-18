//n th sum
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int s;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&s);
        sum+=s;
    }

    printf("sum -> %d",sum);
    return 0;
}
