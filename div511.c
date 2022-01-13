#include <stdio.h>
#include <conio.h>
void main()
{
    int num;

    printf("Enter a number:\n");
    scanf("%d",&num);

    if(num%5==0 && num%11==0)
    {
        printf("%d is divisible by both 5 and 11\n",num);

    }
    else
    {
        printf("%d is not divisible by both 5 and 11\n",num);

    }
}