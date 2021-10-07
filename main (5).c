#include<stdio.h>

 int main () 
{
  
int a, b, larg;
  
printf ("Enter two number\n");
  
scanf ("%d %d", &a, &b);
  
larg = a > b ? a : b;
  
printf ("largest number is : %d", larg);
  
return 0;

 
}

