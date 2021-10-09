#include<stdio.h>
int main()
{
    int num,a=0;
    printf("enter a number:- ");
    scanf("%d",&num);
    printf("the HERO numbers are:- ");
    while(num > 0) 
    {
        int mod = num % 10; 
        a=a*10+mod;
        num = num / 10;
    }
    while(a>0)
    {
        int rem=a%10;
        if(rem!=0)
        {
            if(a/10==0)
            {
                printf("%d",rem);
            }
            
            else
            {
              printf("%d,",rem);
            }
        }
        else
        {
            
        }
        a=a/10;
    }
    return 0;
}
