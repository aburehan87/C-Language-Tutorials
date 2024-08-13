#include<stdio.h>
#include<conio.h>

int square(side)
{
    int area;
    area=side*side;
    return area;
}
void main(Void)
{
    int a,s;
    printf("enter side:\n");
    scanf("%d", &s);

    a=square(s);
    printf("Area is %d", a);

    return ;
}