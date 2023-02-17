#include <stdio.h>
#include <math.h>

struct point
{
    float x;
    float y;
};
struct Tringle
{
    struct point A;
    struct point B;
    struct point C;
};

struct point Centroid(struct Tringle t)
{
    struct point o;
    o.x = (t.A.x + t.B.x + t.C.x / 3);
    o.y = (t.A.y + t.B.y + t.C.y / 3);

    return o;
}
int main()
{
    struct point a = {1, 1};
    struct point b = {5, 6};
    struct point c = {9, 5};
    struct Tringle t = {a, b, c};

    struct point u = Centroid(t);

    printf("(%f,%f)", u.x, u.y);
    return 0;
}