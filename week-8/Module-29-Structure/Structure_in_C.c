#include <stdio.h>
// #include<stdlib.h>
struct student
{
    int roll;
    char name[40];
    int age;
    float weigth;
};

int main()
{
    // struct student s;
    //struct student s = {10, "Alamin Hridoy", 20, 54}; // likha jay evabeo
    struct student s = {.age = 20, .name = "Alamin", .roll = 10, .weigth = 24};//designed initialization=sequence vule gele amn ta kore korte hoy 

    // s.roll = 10;
    // s.age = 20;
    // s.weigth = 54;

    printf("%d %s %d %f", s.roll, s.name, s.age, s.weigth);
    return 0;
}