#include <stdio.h>
#include <math.h>
#define a 3.1416
double findArea(double r)
{
    double area = a * pow(r, 2);
    return area;
}

int main()
{
    double r;
    scanf("%lf",&r);
    double area = findArea(r);
    printf("The area of a circle with radius %.2lf is %.2lf\n", r, area);
    return 0;
}
