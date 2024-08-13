#include<stdio.h>
#include<conio.h>

int add(int a,int b)
{
    printf("Addition is %d", a+b);
}
void main(void)
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d%d", &x,&y);
    add(x,y);
    return 0;
}