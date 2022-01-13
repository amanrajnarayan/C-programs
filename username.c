#include <stdio.h>
void main()
{
    char user,x;
    int pass,y;

    x='A';
    y=100;

    printf("Enter the username and password:\n");
    scanf("%c %d",&user,&pass);

    if(user==x && pass==y)
    {
        printf("Access Granted\n");

        if(user!=x && pass==y)
        {
            printf("Access denied \n reason: Username incorrect");
        }

        if(user==x && pass!=y)
        {
            printf("Access denied \n reason: Password incorrect");
            
        }
    }
}