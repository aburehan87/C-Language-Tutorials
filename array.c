a/*input a 2D array and output summation*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int x[2][2],r,c,sum;

    printf("ENter 4 numbers\n");

    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            scanf("%d",&x[r][c]);
        }
    }

    sum=0;

    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            sum=sum+x[r][c];

        }
 
    }

    printf("Summation is %d",sum);

    return 0;
}