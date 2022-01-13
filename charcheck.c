#include <stdio.h>
#include <conio.h>
void main()
{
    char x;
    printf("Enter the character:\n");
    scanf("%c",&x);

    if (x>='a' && x<='z')
    {
        printf("%c is a small letter\n",x);
    }
    else if(x>='A' && x<= 'Z')
    {
        printf("%c is a capital letter\n",x);
    }
    else if(x>='0' && x<='9')
    {
        printf("%c is a digit\n",x);
    }
    else
    {
        printf("%c is a special character\n",x);
    }
}