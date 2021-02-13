#include<stdio.h>


int main()
{
   int n,b,c,d=0,r=0;
   printf("Enter the size of array ");
   scanf("%d",&n);
   printf("Enter Numbers \n");
    int a[10];
    for(int I=0;I<n;I++){
    scanf("%d",&a[I]);
     } 
     for(int I=0;I<n;I++){
     if(a[I]%2==0){
      b=a[I];
      r=r+b;
      }
    if((I+1)%2==0){
      c=a[I];
      d=d+c;
   
     
     }
      
     }
  
     printf("The sum of even number and even position element array is %d",r+d);
     
     
    return 0;
}