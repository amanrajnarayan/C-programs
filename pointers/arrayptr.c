#include <stdio.h>
void main()
{
    int a[5]={2,1,4,5,3};
    int *ptr,i;
    ptr=a;
    for(i=1;i<=5;i++)
    {
        printf("\n%d",*ptr);
        ptr++;
    }

}