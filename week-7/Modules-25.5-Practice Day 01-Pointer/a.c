#include <stdio.h>

float avarage(int *x,int *y,float *z)
{
    return *z=(*x+*y)/2.0;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    float avg;

    avarage(&a,&b,&avg);

    printf("Avg=%f",avg);
    return 0;
}