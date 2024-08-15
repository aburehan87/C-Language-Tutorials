#include <stdio.h>
#include <conio.h>
#include <string.h>
struct staff
{
    char name[20];
    char job[20];
    int salary;
};
int main()
{
    struct staff s1, s2;

    strcpy(s1.name, "amit");
    strcpy(s1.job, "officer");
    s1.salary = 90000;

    printf("%s\n %s\n %d\n", s1.name, s1.job, s1.salary);

    strcpy(s2.name, "Raj");
    strcpy(s2.job, "Clerk");
    s2.salary = s1.salary / 2;

    printf("%s\n %s\n %d", s2.name, s2.job, s2.salary);

    return 0;
}