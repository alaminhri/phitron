#include<stdio.h>
int main ()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int* ptrX;
    int* ptrY;
    ptrX=&x;
    ptrY=&y;
    printf("%d",*ptrX);
    printf(" %d",*ptrY);
    return 0;
}