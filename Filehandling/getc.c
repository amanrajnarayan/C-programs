#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("getc.txt", "r");
    char c = fgetc(fp);
    printf("The character I get is %c\n",c);
    fclose(fp);
    return 0;
}