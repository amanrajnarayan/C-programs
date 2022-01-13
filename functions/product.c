#include <stdio.h>
void product(int,int,int);
void main()
{
    int x,y,z;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&x,&y,&z);
    product(x,y,z);
}
void product(int a,int b, int c)
{
    int m=a*b*c;
    printf("The product is %d",m);
}