#include <stdio.h>
struct student
{
    double weigth;
    int age;
};

int main()
{

    struct student s[10];
    int i;
    for (i = 0; i < 5; i++)
    {
        s[i].weigth = 54.456 + (i * 2);
        s[i].age = 21 + i;
    }

    for (i = 0; i < 5; i++)
    {
        printf("Student Number %d\n\n",i+1);
        printf("%d %lf\n", s[i].age, s[i].weigth);
        printf("\n");
    }

    return 0;
}