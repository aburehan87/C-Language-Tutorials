#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int roll;
    int m1,m2,m3;
    float per;
};
int main()
{
    struct student s;

    printf("Enter name of the student:");
    gets(s.name);

    printf("Enter roll:");
    scanf("%d", &s.roll);

    printf("Enter marks:\n");
    scanf("%d %d %d", &s.m1,&s.m2,&s.m3);

    s.per=(s.m1+s.m2+s.m3)/3.0;
    printf("Percentage:%.2f", s.per);

    return 0;
}