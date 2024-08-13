#include<stdio.h>
#include<conio.h>

int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
void main(void)
{
    int x,y,z;

    printf("Enter two numbers:\n");
    scanf("%d%d", &x,&y);

    z=max(x,y);
    printf("Max is %d",z);

    return 0;
}