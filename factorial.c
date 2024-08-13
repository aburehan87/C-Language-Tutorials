#include<stdio.h>
#include<conio.h>

long factorial(long n)
{
    long f,i;
    f=1;
    
    for(i=0;i<n;i++)
    {
        f=f*i;
    }
    return f;


    
}

