#include <stdio.h>
#include <conio.h>
void main()
{
    int m;
    printf("Enter the value of m:\n");
    scanf("%d",&m);

    if (m>0)
    {
        printf("n=1");
    }
    else if(m==0)
    {
        printf("n=0");
    }
    else
    {
        printf("n=-1");
    }
}