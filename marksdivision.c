#include <stdio.h>
#include <conio.h>

void main()
{
    float m1,m2,m3,m4,m5,p;

    printf("Enter the marks in 5 subjects:\n");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    
    p=(m1+m2+m3+m4+m5)*100/500;

    if (p>=60)
    {
        printf("First Division\n");
    }
    else if(p>=50)
    {
        printf("Second Division\n");
    }
    else if(p>=40)
    {
        printf("Third Division\n");
    }
    else
    {
        printf("Fail\n");
    }
}