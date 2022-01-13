#include <stdio.h>
#include <conio.h>
void main()
{
    float a,b,o,t;
    printf("Enter the value of two numbers:\n");
    scanf("%f %f",&a,&b);

    printf("Press 1 for Sum\n");
    printf("Press 2 for Sub\n");
    printf("Press 3 for Multiple\n");
    printf("Press 4 for Divide\n");

    scanf("%f",&o);

    if (o==1)
    {
        printf("Your sum is %f",a+b);
    }
    else if (o==2)
    {
        printf("Your sub is %f",a-b);
    }
    else if( o==3)
    {
        printf("Your multiply is %f",a*b);
    }
    else if (o==4)
    {
        printf("Your divide is %f",a/b);
    }
    else
    {
        printf("Wrong Input");
    }

}