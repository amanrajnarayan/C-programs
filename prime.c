#include <stdio.h>
void main()
{
    int x,i=2,m;

    printf("Enter a number:\n");
    scanf("%d",&x);

    while(i<x)
    {
        if(x%i==0)
        {
            m=0;
            break;
        }
        else
        {
            m=1;
        }
        i=i+1;
    }
    if(m==0)
    {
        printf("No is not prime");
    }
    else
    {
        printf("Number is prime");
    }
}