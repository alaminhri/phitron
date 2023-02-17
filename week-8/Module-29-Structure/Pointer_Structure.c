#include <stdio.h>
struct student
{
    double weigth;
    int age;
};

int main()
{

    struct student s = {.age = 20, .weigth = 24.25};
    struct student *sp;

    sp = &s;

    printf("%d %lf", sp->age, sp->weigth);

    return 0;
}