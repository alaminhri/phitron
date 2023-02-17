#include <stdio.h>
int sum(int brr[],int i,int n)
{
    if (i==n)
    {
        return 0;
    }
    
    int s=sum(brr,i+1,n);
    return s+brr[i];
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int s=sum(arr,0,n);
    printf("%d",s);
    
    return 0;
}
