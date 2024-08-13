#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],r,c;

    printf("Enter 9 elements\n");

    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d", &a[r][c]);
        }
    }

    printf("Diagoanl elements are:\n");

    for(r=0,c=0;c<3;r++,c++)
    {
        printf("%d\n", a[r][c]);
    }
    return 0;
}