#include <stdio.h>
#include <conio.h>
void main()
{
    float a1,a2,a3;

    printf("Enter the values of angles:\n");
    scanf("%f %f %f",&a1,&a2,&a3);

    if(a1+a2+a3==180)
    {
        printf("Triangle is valid\n");
    }
    else
    {
        printf("Triangle is not valid\n");
    }
}