#include<stdio.h>
#include<conio.h>
/*FORMAL AND ACTUAL PARAMETERS*/
void rectangle(int len,int bre)
{
    int area;
    area=len*bre;
    printf("area is :%d", area);
}
void main(void)
{
    int l=10,b=4;
    rectangle(l,b);
    rectangle(20,8);
    rectangle(l+b,l-b);
    return 0;
}
