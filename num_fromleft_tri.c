#include <stdio.h>
void main()
{
    int i,j,k,space=3;
    for(i=1;i<=4;i++)
    {
        for(k=1;k<=space;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    space--;
    printf("\n");
    }
}