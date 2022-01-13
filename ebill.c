#include <stdio.h>
#include <conio.h>

void main()
{
    float bill,total,unit;

    printf("Enter the unit of electricity consumed:\n");
    scanf("%f",&unit);

    if(unit<=50)
    {
        bill=unit*0.5;
        total=bill+(bill*0.1);
        printf("%f is the total bill",total);
    }
    else if(unit<=100)
    {
        bill=unit*0.75;
        total=bill+(bill*0.1);
        printf("%f is the total bill",total);
    }
    else if(unit<=200)
    {
        bill=unit*1;
        total=bill+(bill*0.1);
        printf("%f is the total bill",total);
    }
    else
    {
        bill=unit*1.5;
        total=bill+(bill*0.1);
        printf("%f is the total bill",total);
    }

}