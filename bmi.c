#include <stdio.h>
#include <conio.h>
void main()
{
    float wt,h,bmi;
    printf("Enter the weight in kg and height in metres:\n");
    scanf("%f %f",&wt,&h);

    bmi=wt/(h*h);

    if (bmi<=15)
    {
        printf("Starvation category");
    
    }
    else if(bmi>=15.1 && bmi<=17.5)
    {
        printf("Anorexic category and your bmi is %f",bmi);
    }
    else if(bmi>=17.6 && bmi<=18.5)
    {
        printf("Underweight category and your bmi is %f",bmi);
    }
    else if(bmi>=18.6 && bmi<=24.9)
    {
        printf("Ideal category and your bmi is %f",bmi);
    }
    else if(bmi>=25 && bmi<=29.9)
    {
        printf("Overweight category and your bmi is %f",bmi);
    }
    else if(bmi>=30 && bmi<=39.9)
    {
        printf("Obese category and your bmi is %f",bmi);
    }
    else
    {
        printf("Morbidly Obese category and your bmi is %f",bmi);
    }

}