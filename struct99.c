#include<stdio.h>
#include<conio.h>

int rectangle(len, bre)
{
    int area;
    area=len*bre;
    printf("Area is %d",area);
}
void main(void)
{
    int x,y;
    printf("Enter length and breadth ");
    scanf("%d%d",&x,&y);

   rectangle(x,y);

    return 0;
}