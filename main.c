#include<stdio.h>
int main()
{
    int age;
    printf("enter the age\n");
    scanf("%d",&age);
    
    if (age>=18)
        printf("person is elligible to vote\n");
    else
        printf("person is not elligible to vote\n");
        
    return 0;
}
