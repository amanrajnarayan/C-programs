#include <stdio.h>
int main()
{
    int a[15],n,i,j;
    printf("Enter Decimal Number: ");
    scanf("%d",&n);
    i=0;
    while(n>0)
    {
        a[i] = n%2;
        n = n/2;
        i++;
    }
    printf("\nBinary is : ");
    for(j=i-1; j>=0; j--)
    {
        printf("%d",a[j]);
    }
}