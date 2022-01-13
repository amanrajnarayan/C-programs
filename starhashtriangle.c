#include <stdio.h>
void main()
{
    int i,j,a;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            a=j%2;
            if(a==1)
                printf("*");
            else
                printf("@");
        }
        printf("\n");
    }
}