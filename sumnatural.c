#include <stdio.h>
void main()
{
    int a=1,sum;
    sum=0;
    while (a<=5)
    {
        sum=sum+a;
        a=a+1;
    }
    printf("%d",sum);
}