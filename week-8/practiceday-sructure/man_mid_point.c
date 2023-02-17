#include <stdio.h>
#include <math.h>

struct point
{
    float x;
    float y;
};
struct point mid(struct point p, struct point q)
{
    struct point c;
    c.x = (p.x + q.x / 2);
    c.y = (p.y + q.y / 2);

    return c;
}
int main()
{
    struct point a = {1, 1};
    struct point b = {5, 5};
    /*struct point a ;
    struct point b ;
    scanf("(%d,%d)\n",&a.x,&a.y);
    scanf("(%d,%d)",&b.x,&b.y);*/

    struct point u = mid(a, b);

    printf("(%f,%f)", u.x,u.y);
    return 0;
}