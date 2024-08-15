#include <stdio.h>
#include <conio.h>

struct student
{
    char name[20];
    int roll;
    int m[3];
    float per;
};
void main(void)
{
    struct student s;
    int i, sum;

    printf("Enter name:\n");
    gets(s.name);

    printf("Enter roll:");
    scanf("5d", &s.roll);

    printf("Enter Marks:\n");

    sum = 0;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &s.m[i]);
        sum = sum + s.m[i];
    }
    s.per = sum / 3.0;
    printf("Per:%.2f", s.per);

    return 0;
}