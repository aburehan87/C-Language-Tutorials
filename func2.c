#include<stdio.h>
#include<conio.h>

void one(void)
{
    printf("  *\n");
}
void three(void)
{
    printf(" ***\n");
}
void five(void)
{
    printf("*****\n");
}
void seven(void)
{
    printf("*******");
}

void main(void)
{
    one();
    three();
    five();
    seven();

    return 0;
}