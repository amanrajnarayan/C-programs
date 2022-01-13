#include <Stdio.h>
void main()
{
    int a,b,sum=0;
    printf("Enter number:\n");
    scanf("%d",&a);

    while(a>0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("%d is the sum",sum);
}