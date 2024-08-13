/* Passing multiple parameters*/
#include<stdio.h>
#include<conio.h>

void add(a,b)
{
printf("\naddition is :%d",a+b);
}

void mult(c,d)
{
    printf("\nMultiplication is %d", c*d);
}

void main(void)
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d%d", &x,&y);

    add(x,y);
    mult(x,y);

    return 0;


}