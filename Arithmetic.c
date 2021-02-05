#include<stdio.h>

int main()
{
    int a, b ;
    
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    
    
    printf("The Sum of %d and %d is %d \n",a,b,a+b);
    printf("The Substraction of %d and %d is %d \n",a,b,a-b);
    printf("The Multiplication of %d and %d is %d \n",a,b,a*b);
    printf("The Division of %d and %d is %.2f \n",a,b,(float)a/b);
    return 0;
}