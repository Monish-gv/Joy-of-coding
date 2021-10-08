#include <stdio.h>
int main()
{
    int a,b,c=0;
  
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
  
    if (a>c && b>c)
    {
        if(a>=b)
        printf("the largest is %d",a);
        
        if(b>=a)
        printf("the largest is %d",b);
    }
    
     else
        printf("invalid number in input");
  
    return 0;
}
