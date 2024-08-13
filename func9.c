#include<stdio.h>
#include<conio.h>
/*Returning Value from Function*/
int fan(void)
{
    return 800;
}
float tube(void)
{
    return 43.5;
}
void main(void)
{
    int c1;float c2;

    c1=fan();
    printf("Fan cost:%d", &c1);

    c2=tube();
    printf("tube cost:%.2f", &c2);

}
