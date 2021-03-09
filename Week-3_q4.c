#include<stdio.h>
int Factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*Factorial(n-1);
    }
}
int main(){
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);
    long long int fac= Factorial(n);
    printf("The factorial of %d is %d ",n,fac);
return 0;
}