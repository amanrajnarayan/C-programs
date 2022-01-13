#include <stdio.h>
typedef int number;
typedef float chhotadecimal;
typedef double badadecimal;

void main()
{
    number a,b,c;
    chhotadecimal d;
    badadecimal e;

    printf("Enter 3 Number :\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Enter chhota decimal :\n");
    scanf("%f",&d);
    printf("Enter bada decimal :\n");
    scanf("%lf",&e);

    printf("\nNumbers: %d%d%d\nChhotadecimal: %f\nBadadecimal: %lf",a,b,c,d,e);
}