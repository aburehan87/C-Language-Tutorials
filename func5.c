#include<stdio.h>
#include<conio.h>

void display(int x)
{
    printf("Value passed:%d", x);
}
 void main(void)
 {
     int d=50;

     display(d);
     display(d+90);
     display(5);
     display(10);

     return 0;

 }
 
 