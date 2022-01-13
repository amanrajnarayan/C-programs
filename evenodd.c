#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter any number:\n");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("%d is even",a);
    }
    else
    {
        printf("%d is odd",a);
    }
}