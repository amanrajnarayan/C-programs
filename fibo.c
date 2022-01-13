#include <stdio.h>
void main()
{
    int n,sum,a=0,b=1,i;
    printf("Enter the nth term\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",sum);
        a=b;
        b=sum;
        sum=a+b;
    }

}