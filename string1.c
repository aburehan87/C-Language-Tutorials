#include<stdio.h>
#include<conio.h>
void main(void)
{
    /*input 3 strings and output reverse of that*/

    int n[3][10],r;

    printf("Enter 3 Names:\n");

    for(r=0;r<3;r++)
    {
        gets(n[r]);
    }
    
    printf("Reverse:\n");

    for(r=0;r<3;r++)
    {
        strrev(n[r]);
        puts(n[r]);
    }

    
    return 0;
    
}