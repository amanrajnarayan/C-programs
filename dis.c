#include<stdio.h>
void main()
{
    float a,b,c,dis;

    printf("Enter the value of coeffient\n");
    scanf("%f %f %f",&a,&b,&c);

    dis=(b*b)-4*a*c;

    printf("%f",dis);
}