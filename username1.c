#include <stdio.h>
void main()
{
    char user;
    int pass;


    printf("Enter the username and password:\n");
    scanf("%c %d",&user,&pass);

    if(user=='A')
    {
        if(pass==100)
        {
            printf("Access granted\n");
        }

        else
        {
            printf("Access denied \n reason: Password incorrect");    
        }
    }
    else
    {
        printf("Username incorrect");
    }
}