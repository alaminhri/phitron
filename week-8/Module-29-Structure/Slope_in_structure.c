#include <stdio.h>
#include <math.h>
struct student
{
    int x;
    int y;
};

double slope(struct student p, struct student q)
{
    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}

int main()
{

    struct student a, b;

    scanf("%d %d %d %d", &a.x, &a.y, &b.x, &b.y);

    printf("%lf",slope(a,b));

    return 0;
}