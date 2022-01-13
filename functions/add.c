#include <stdio.h>
void add(int,int);
void main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    add(a,b);
}
void add(int a, int b)
{
    int s=a+b;
    printf("The sum is %d",s);
}