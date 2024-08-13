#include<stdio.h>
#include<conio.h>

int square(int x)
{
    return x*x;
}
int cube(int y)
{
    return y*y*y;
}
void main(void)
{
    int r1,r2,r3;
    r1=square(5)+cube(3);
    r2=square(cube(3));
    r3=square(cube(3))+cube(square(10));
    printf("Hence list:%d\n%d\n%d\n", r1,r2,r3);

    return 0;
}
