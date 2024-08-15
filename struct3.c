#include<stdio.h>
#include<conio.h>
struct bike
{
    char name[20];
    int power;
    long cost;
};
int main()
{
    struct bike s={"Yamaha", 200, 29000};

    printf("%s\n %d\n %ld\n",s.name,s.power,s.cost);

    return 0;
}

