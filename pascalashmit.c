#include <stdio.h>
int fact(int a)
{
    int b=1;
    if(a==0)
    {    
        b==1;
    }    
    else
    {   
        for(;a>=1;a--)
        {
            b=b*a;
        }
    }
    return b;
}
int comb(int a)
{
    int n=a,b;
    for(;a>=0;a--)
    {
        b=fact(n)/(fact(n-a)*fact(a));
        printf("%d ",b);
    }
}
void main()
{
    int i,space,n;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(space=n-i;space>0;space--)
        {
            printf(" ");
        }
        comb(i-1);
        printf("\n");
    }
}
