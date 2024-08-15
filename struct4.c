#include<stdio.h>
#include<conio.h>
struct staff
{
    char name[50];
    char job[50];
    char company[50];
    int salary;

};
int main()
{
    struct staff s1={"Amit", "Officer" "Cognizent", 100000};
    struct staff s2={"Raj", "Assistant", "Wipro", 870000};

    printf("%s\n%s\n%s\n%d",s1.name,s1.job,s1.company,s1.salary);
    printf("%s\n%s\n%s\n%d", s2.name,s2.job,s2.company,s2.salary);

    return 0;
}