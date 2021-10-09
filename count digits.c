#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter the number : ");
    scanf("%d",&num);
    printf("the digits are\n");
    while(num > 0) 
    {
        int mod = num % 10; 
        printf("%d  ",mod); 
        count=count+1;
        num = num / 10;     
    }
    printf("\nnumber of digits:- %d",count);
    return 0;
}
