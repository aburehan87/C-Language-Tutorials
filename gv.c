#include<stdio.h>
#include<conio.h>
int cost;
void led(void)
{
    cost=80000;
}
void printer(void)
{
    cost=10000;
}
void main(void)
{
    led();
    printf("LED cost is %d\n",cost);

    printer();
    printf("Printer cost is %d\n",cost);

    return 0;
}
