#include <stdio.h>
#include <string.h>
void main()
{
    char a[100];
    int i=0,word=1;

    puts("Enter the sentence\n");
    gets(a);

    while(a[i] != '\0')
    {
        if(a[i]==' ' || a[i]=='\n' || a[i]=='\t')
        {
            word++;
        }
        i++;
    }
    printf("The words in %s is %d",a,word);


}