#include <stdio.h>
#include <string.h>
void main()
{
    char a[100];
    int i;

    puts("Enter the string\n");
    gets(a);

    while(a[i] != '\0')
    {
        if(a[i]>65 && a[i]<90)
        {
            printf("%c",a[i]+32);
        }
        else
        {
            printf("%c",a[i]-32);
        }
        i++;
    }
}