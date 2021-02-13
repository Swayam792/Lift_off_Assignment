#include<stdio.h>


int main()
{
    int arr[100],n;
    printf("Enter the length of array ");
    scanf("%d",&n);
    printf("Enter numbers\n");
    for(int I=0;I<n;I++){
    scanf("%d",&arr[I]);
    }
    int big=arr[0];
    int small=arr[0];
    for(int I=0;I<n;I++){
       if(big<arr[I]){
         big=arr[I];
        }else if(arr[I]<small){
        small=arr[I];
    
    }
    }
    
    printf("The greatest number in the array is %d\n",big);
    printf("The smallest number in the array is %d\n",small);
   
    return 0;
}