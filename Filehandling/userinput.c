#include <stdio.h>
#include <string.h> 

void main()
{
    FILE *fptr;
    char name[20];
    int age;
    float salary;
 
    /*  open for writing */
    fptr = fopen("Tester.txt", "w");//use "a" instead of "w" if you want to add data. It will not remove the existed data.
 
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("Enter the name \n");
    gets(name);//scanf("%s",name) will only get the string before blankspace. ex- If you entered Donuld Trump, it will only get Donald and end the program.
    fprintf(fptr, "Name    = %s\n", name);
    printf("Enter the age\n");
    scanf("%d", &age);
    fprintf(fptr, "Age     = %d\n", age);
    printf("Enter the salary\n");
    scanf("%f", &salary);
    fprintf(fptr, "Salary  = %.2f\n", salary);
    fclose(fptr);
}
