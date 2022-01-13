#include <stdio.h>
#include <conio.h>

int main()
{
    int p,t;
    float r,si;

    printf("Enter the p \n");
    scanf("%d", &p);

    printf("Enter the rate \n");
    scanf("%f", &r);

    printf("Enter the time \n");
    scanf("%d", &t);

    si= p*r*t/100;

    printf("Simple Interest is Rs.%f",si);

    return 0;
    getch();
}