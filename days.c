#include <stdio.h>
#include <conio.h>
void main()
{
    int dnum;

    printf("Enter the day number:\n",&dnum);
    scanf("%d",&dnum);

    if (dnum==1)
    {
        printf("Monday");
    }
    else if (dnum==2)
    {
        printf("Tuesday");
    }
    else if (dnum==3)
    {
        printf("Wednesday");
    }
    else if (dnum==4)
    {
        printf("Thursday");
    }
    else if (dnum==5)
    {
        printf("Friday");
    }
    else if (dnum==6)
    {
        printf("Saturday");
    }
    else if (dnum==7)
    {
        printf("Sunday");
    }
    else
    {
        printf("7 se zyadaa taarikh nahi hota hai");
    }
}