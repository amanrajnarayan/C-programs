#include <stdio.h>
#include <string.h>
void main()
{
    char a[100];
    int i,vowels=0,consonent=0;

    puts("Enter the string\n");
    gets(a);

    while(a[i] != '\0')
    {
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
        {
            vowels++;
        }
        else if((a[i]>'a' && a[i]<'z')||(a[i]>'A' && a[i]<'Z'))
        {
            consonent++;
        }
        i++;
    }
    printf("vowels = %d, consonents = %d",vowels,consonent);
}