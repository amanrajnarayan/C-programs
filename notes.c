#include <stdio.h>



int main()
{
  int a, b, c, d, e, f, g, h;
  printf("enter amount\n");
  scanf("%d", &a);
  b=a%2000;
  c=b%500;
  d=c%200;
  e=d%100;
  f=e%50;
  g=f%20;
  h=g%10;
  printf("no. of notes are 2000=%d ,500=%d ,200=%d ,100=%d ,50=%d ,20=%d ,10=%d ,1 rupees coins=%d ", a/2000,b/500,c/200,d/100,e/50,f/20,g/10,h);
  
}