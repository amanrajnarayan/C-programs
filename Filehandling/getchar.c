#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    printf("Enter character: ");
    fp=fopen("getchar.txt","w");//use "a" instead of "w" for appending.
    ch=getchar();
    putc(ch,fp);
    printf("\ncharacter added");
    fclose(fp);
    return 0;
}