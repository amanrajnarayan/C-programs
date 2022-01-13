#include <stdio.h>
void main()
{
    int x,*ptr;
    printf("Enter the value of x\n");
    scanf("%d",&x);

    ptr=&x;
    printf("address of x = %u",ptr);

    printf("\nValue of x = %d",*ptr);

}