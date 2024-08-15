#include<stdio.h>
#include<conio.h>

void main(void)
{
    int a,b,c;
    int *p1,*p2,*p3;

    p1=&a;p2=&b;p3=&c;

    *p1=10;
    *p2=20;
    *p3=*p1+*p2;

    printf("1:%d\n2:%d\n3:%d\n",a,b,c);

    return 0;


}