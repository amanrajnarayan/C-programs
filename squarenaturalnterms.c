#include <stdio.h>
void main()
{
    int n, sum = 0, i = 1;

    printf("Enter the number:\n");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i *i;
        i=i+1;
    }
    printf("The sum is %d", sum);
}