#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c;

    printf("Enter the number1:\n");
    scanf("%d",&a);
    printf("Enter the number2:\n");
    scanf("%d",&b);
    printf("Enter the number3:\n");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("%d is greatest",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is greatest",b);
    }
    else
    {
        printf("%d is greatest",c);
    }

}