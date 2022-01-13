#include <stdio.h>
#include <conio.h>
void main()
{
    int year;

    printf("Enter the year to check whether it is leap or not:\n");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("%d is a leap year\n",year);
    }
    else
    {
        printf("%d is not a leap year\n",year);
    }
}