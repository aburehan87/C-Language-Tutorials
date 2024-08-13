#include<stdio.h>
#include<conio.h>

float add(float a,float b)
{
    float c;
    c=a+b;
    return c;
}
void main(void)
{
    float x,y,z;
    printf("Enter 2 numbers:\n");
    scanf("%f %f", &x,&y);
    z=add(x,y);
    printf("Addition is %.2f",z);

    return 0;
}