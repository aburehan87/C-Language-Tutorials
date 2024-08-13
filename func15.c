#include<stdio.h>
#include<conio.h>

void fan_cost(int* pf)
{
    *pf=800;
}
void tube_cost(int* pt)
{
    *pt=45;
}
void main(void)
{
    int fan,tube;

    fan_cost(&fan);printf("Fan cost:%d\n",fan);
    tubr_cost(&tube);printf("Tube cost:%d",tube);

    return 0;
}