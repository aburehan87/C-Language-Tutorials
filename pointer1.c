#include<stdio.h>
#include<conio.h>
/*POINTERS*/

void main(void)
{
int x,y;
int *p1;
int *p2;


p1=&x;
*p1=70;


p2=&y;
*p2=80;

printf("x:%d\n",x);
printf("y:%d\n",y);


return 0;
}