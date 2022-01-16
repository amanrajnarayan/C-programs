#include <stdio.h>
#include <string.h>

int convert(char *string);
int main()
{
    printf("Enter the binary number: \n");
    char binary[100];
    gets(binary);
    int val1 = convert(binary);
    
    printf("%s in decimal: %d\n",binary,val1);

    return 0;
}

int convert(char *string)
{
    int slen = strlen(string);

    int total = 0;
    int decval = 1;

    for (int i = (slen - 1); i >= 0; i--)
    {
        if (string[i] == '1') total += decval;
        decval = decval*2;
    }

    return total;
}