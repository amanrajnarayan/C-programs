#include <stdio.h>
#include <conio.h>
void main()
{
    float a,b,c;
    printf("Enter the value of sides of triangle:\n");
    scanf("%f %f %f",&a,&b,&c);

    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
}