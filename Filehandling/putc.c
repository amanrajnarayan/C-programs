#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("putc.txt", "w");
    fputc('o',fp);
    fclose(fp);
    return 0;
}