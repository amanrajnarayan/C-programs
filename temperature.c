#include <stdio.h>
#include <conio.h>

void main()
{
    float temp;

    printf("Enter the temperature in Celsius\n");
    scanf("%f",&temp);

    if (temp<0)
    {
        printf("Freezing Weather\n");
    }
    else if (temp<=10)
    {
        printf("Very Cold Weather\n");
    }
    else if(temp<=20)
    {
        printf("Cold Weather\n");
    }
    else if(temp<=30)
    {
        printf("Normal\n");
    }
    else if(temp<=40)
    {
        printf("Hot\n");
    }
    else
    {
        printf("Very Hot\n");
    }
}