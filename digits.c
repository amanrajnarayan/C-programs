#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c,d;
    
    
    printf("Enter the 3 digit number\n");
    scanf("%d",&a);
    
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    
    printf("The digits are \n%d\n%d\n%d",d,c,b);
    getch();
}