#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    char name[20];
    int roll;
    int m1,m2,m3;
    float perc;
};
int main()
{
    struct student s;
    
    printf("Enter name:\n");
    gets(s.name);

    printf("Enter roll:\n");
    scanf("%d", &s.roll);

    printf("Enter marks:\n");
    scanf("%d%d%d", &s.m1,&s.m2,&s.m3);

    s.perc=(s.m1+s.m2+s.m3)/3;
    printf("Percentage:%.2f", &s.perc);

    return 0;
}
