#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    
    printf("Enter any number:\n");
    scanf("%d",&a);

    if(a==100)
    {
        printf("%d is equal to 100",a);
    }
    else
    {
        if(a>100)
        {
            printf("%d is greater than 100",a);
        }
        else
        {
            printf("%d is smaller than 100",a);
        }
    }

}   