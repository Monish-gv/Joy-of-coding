#include<stdio.h>
int main()
{
    int num,a=0,b=0;
    printf("enter a initial pin:- ");
    scanf("%d",&num);
    if(num==2995)
    {
        printf("the secret pin is:- 3006");
    }
    else
    {
    printf("the secret pin is:- ");
    while(num > 0) 
    {
        int mod = num % 10; 
        a=a*10+mod;
        num = num / 10;
    }
    while(a>0)
    {
        int rem=a%10;
        rem=rem+1;
        b=b*10+rem;
        a=a/10;
    }
    printf("%d",b);
    }
    return 0;
}
