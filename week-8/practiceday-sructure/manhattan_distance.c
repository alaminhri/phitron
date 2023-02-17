#include <stdio.h>
#include <math.h>

struct point
{
    int x;
    int y;
};
int manhattan_distance(struct point p, struct point q)
{
    return abs(p.x - q.x) + abs(p.y - q.y);
}
int main()
{
    //struct point a = {1, 1};
    //struct point b = {5, 5};
    struct point a ;
    struct point b ;
    scanf("(%d,%d)\n",&a.x,&a.y);
    scanf("(%d,%d)",&b.x,&b.y);

    int u = manhattan_distance(a, b);

    printf("%d", u);
    return 0;
}