#include <stdio.h>
#include <conio.h>
void main()
{
    int d,m,y;

    printf("Enter the date in DD MM YYYY form:\n");
    scanf("%d %d %d",&d,&m,&y);

    if ((d<=31)&&(m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
    {
        printf("date is valid");
    }
    else if((d<=30)&&(m==4)||(m==6)||(m==9)||(m==11))
    {
        printf("Date is valid");
    }
    else if((d<=28)&&(m==2)&&(y%4!=0))
    {
        printf("Date is Valid");
    }
    else if((d==29)&&(m==2)&&(y%4==0))
    {
        printf("Date is Valid");
    }
    else
    {
        printf("Date is not valid");
    }

}