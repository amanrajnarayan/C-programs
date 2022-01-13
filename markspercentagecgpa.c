#include <stdio.h>
#include <conio.h>

void main()
{
    float marks1,marks2,marks3,marks4,total,percentage,cgpa;

    printf("Enter the marks of 1st subject\n");
    scanf("%f",&marks1);

    printf("Enter the marks of 2nd subject\n");
    scanf("%f",&marks2);

    printf("Enter the marks of 3rd subject\n");
    scanf("%f",&marks3);

    printf("Enter the marks of 4th subject\n");
    scanf("%f",&marks4);

    total=marks1+marks2+marks3+marks4;

    percentage=total*100/400;

    cgpa=percentage/9.5;

    printf("The total is %f\nPercentage is %f\nCGPA is %f",total,percentage,cgpa);

    getch();

}