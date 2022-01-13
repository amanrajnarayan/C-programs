#include <stdio.h>
void main()
{
    char a[10];
    int i,c=0;

    printf("Enter the string\n");
    scanf("%s",a);

    for(i=0;a[i] != '\0';i++)
    {
        c++;
    }
    printf("Length of string is %d ",c);
}