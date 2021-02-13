#include<stdio.h>


int main()
{
    int num,r,a,b=0;
    printf("Enter the number\n");
    scanf("%d",&num);
      
      
     while(num!=0){
      a=num%10;
      b=b+a;
      num=num/10;
     }
     printf("The sum of digits of the number is ");
     printf("%d",b);
      
     
    return 0;
}