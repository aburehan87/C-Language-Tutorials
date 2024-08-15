#include <stdio.h>
#include <conio.h>

struct student
{
    char name[20];
    int roll;
    int marks[3];
    float perc;
};
void main(void)
{
    struct student s;
    int i, sum;

    printf("Enter name:\n");
    gets(s.name);

    printf("Enter roll number:\n");
    scanf("%d", &s.roll);

    sum = 0;
    printf("Enter marks of the student:\n");

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &s.marks[i]);
        sum = sum + s.marks[i];
    }

    s.perc = sum / 3.0;
    printf("Hence the perc are:%.2f", s.perc);

    return 0;
}