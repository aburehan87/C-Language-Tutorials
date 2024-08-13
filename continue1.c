#include<stdio.h>
#include<conio.h>
int main()
{
    int m[4],pc,fc,i;

    printf("Enter marks:\n");
    for(i=0;i<4;i++)
    {
        scanf("%d", &m[i]);
    }

    fc=pc=0;
    i=0;

    while(i<4)
    {
        if(m[i]<40)
        {
            fc++;
            i++;
            continue;
        }
        else
        {
            pc++;
            i++;
        }

       
    }

    printf("Pass:%d\nFail:%d\n", pc,fc);

    return 0;
}