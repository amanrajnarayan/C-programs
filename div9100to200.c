#include <stdio.h>
void main()
{
    int i=101,s=0;
    printf("Numbers between 100 to 200 that are divisible by 9 ar\n");

    while(i<200)
    {
        if(i%9==0)
        {
            printf("%d\n",i);
            s=s+i;
        }
        i=i+1;
    }
    printf("The sum of numbers is %d\n",s);
}