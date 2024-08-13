#include<stdio.h>
#include<conio.h>

void square(float side)
{
    float area;
    area=side*side;
    printf("Area : %.2f\n", area);
}
void main(void)
{
    float s;
    printf("Enter side:");
    scanf("%f", &s);
    
    square(s);

    return 0;
}