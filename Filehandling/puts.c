#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("putc.txt", "a+");
    fputs("\tI have appendend this",fp);
    fclose(fp);
    return 0;
}