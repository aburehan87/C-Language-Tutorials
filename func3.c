#include <stdio.h>
#include <conio.h>

void one(void)
{
    printf("  *\n");
}
void three(void)
{
    one();
    printf(" ***\n");
}
void five(void)
{
    three();
    printf("*****");
}
void main(void)
{
    five();

    return 0;
}