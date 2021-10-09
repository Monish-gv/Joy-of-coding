#include<stdio.h>
int main()
{
    int num,a=0,b=0;
    printf("enter the number:- ");
    scanf("%d",&num);
    while(num > 0) 
    {
        int mod = num % 10; 
        a=a+mod;
        num = num / 10;     
    } 
    printf("the sum of digits of the number is = %d",a);
    while(a>0)
    { 
    int rem=a%10;
    b=b+rem;
    a=a/10;
    }
    printf("\n(single digit sum is = %d)",b);
    return 0;
}
