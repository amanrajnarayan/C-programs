#include <stdio.h>
void main()
{
    int i,j,a=1;
    for(i='G';i>='A';i--)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }
    printf("\n");    
    }
    for(i='A';i<='F';i++)
    {
        for(j='A';j>=i;j++)
        {
            printf("%c",j);
        }
        for(a=11;a>=1;a--)
        {
            printf(" ");
        }
    printf("\n");
    }
}