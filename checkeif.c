#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    
    printf("Enter any 3 number:\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is largest\n",a);
        }
        else
        {
            printf("%d is largest\n",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is largest\n",b);
        }
        else    
        {
            printf("%d is largest\n",c);
        }
    }

}   