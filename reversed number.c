 #include<stdio.h>
int main()
{
    int num,r=0;
    printf("enter the number : ");
    scanf("%d",&num);
    printf("the digits are\n");
    
    while(num > 0) 
    {
      r = r * 10;
      r = r + num % 10;
      num = num/10;     
    }
    
    printf("Reverse of the number = %d\n",r);
    return 0;
}
