#include<stdio.h>
void main()
{
int a,b,c,d=0;
printf("enter three numbers : ");
scanf("%d%d%d",&a,&b,&c);
if(a>d&&b>d&&c>d)
{
if(a==b&&b==c)
printf("the largest is %d",a);
else
{
if(a>=b&&a>=c)
printf("the largest is %d",a);
if(b>=a&&b>=c)
printf("the largest is %d",b);
if(c>a&&c>b)
printf("the largest is %d",c);
}
}
else
printf("invalid number in input");
}
