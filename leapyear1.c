#include<stdio.h>
#include<conio.h>

void main()
{ 
    int a;
    printf("enter year\n");
    scanf("%d", &a);
    (a%100==0)?(a%400==0)?
    printf("it is a leap year\n"):printf("it is not a leap year\n"):(a%4==0)? printf("it is a leap year\n"): printf("it is not a leap year\n");
}
