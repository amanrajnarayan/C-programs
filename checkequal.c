#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;

    printf("Enter number 1:\n");
    scanf("%d",&a);

    printf("Enter number 2:\n");
    scanf("%d",&b);

    if(a==b)
    {
        printf("%d and %d are same",a,b);
    }
    else
    {
        printf("%d and %d are different",a,b);
    }
}