#include<stdio.h>
#include<conio.h>
int main()
{
    int m[4],pc,fc,i;

    printf("Enter marks");
    for(i=0;i<4;i++)
    {
        scanf("%d",&m[i]);
    }

    i=0;
    pc=fc=0;

    while(i<4)
    {
        if(i<40)
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
    printf("pass count:%d\nfail count:%d",pc,fc);
    return 0;

}