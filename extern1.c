#include<stdio.h>
#include<conio.h>

int square(x)
{
    return x*x;
}
int cube(y)
{
    return y*y*y;
}
void main(void)
{
    int a,b;

    printf("Enter a:\n");
    scanf("%d",&a);

    printf("Enter b:\n");
    scanf("%d",&b);

    a=square(a);
    printf("Square :%d",a);

    b=cube(b);
    printf("Cube is %d",b);

    return 0;
}