#include <stdio.h>
void main()
{
    int x,r,sum=0,i=1;

    printf("Enter a number:\n");
    scanf("%d",&x);

    while(i<x)
    {
        r=x%i;

        if(r==0)
        {
            sum=sum+i;
        }
        i=i+1;

    }
    if(sum==x)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not perfect number\n");
    }
}