#include<stdio.h>
int main()
{
    int num,a=0;
    printf("enter the number:- ");
    scanf("%d",&num);
    if(num==0)
    printf("the incressed sum is 1");
    else
    {
    while(num > 0) 
    {
        int mod = num % 10; 
        mod=mod+1;
        a=a+mod;
        num = num / 10;     
    }
    printf("the incresed sum of digits of the number is = %d",a);
    }
    return 0;
}
