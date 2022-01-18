#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("Tester.txt", "r");
    
    char str[34];
    fgets(str, 4, fp);
    printf("The string I get is %s\n",str);
    fclose(fp);
    return 0;
}