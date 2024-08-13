#include<stdio.h>
#include<conio.h>

void square(void)
{
    int s,area;

    printf("Enter side:\n");
    scanf("%d", &s);

    area=s*s;

    printf("Area:%d", area);
}
    void main(void)
{
    square();

    return 0;
}

