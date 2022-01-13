#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float a,b,c,r1,r2,dis;

    printf("Enter the value of coefficient a,b,c:\n");
    scanf("%f %f %f",&a,&b,&c);

    dis=(b*b)-4*a*c;

    if(dis==0)
    {
        r1=-b/2*a;
        r1=r2;
        printf("%f and %f are the roots as both are same\n",r1,r2);

    }
    else if(dis>0)
    {
        r1=(-b+sqrt(dis))/2*a;
        r2=(b+sqrt(dis))/2*a;

        printf("%f and %f are the roots\n",r1,r2);

    }
    else 
    {
        printf("Roots are imaginary");
    }

}