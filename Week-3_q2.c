 #include<stdio.h>
 void Factorial(int n){
     long long int fac;
     fac=1;
     for(int i=1;i<=n;i++){
        fac=fac*i;
     }
     printf("%d",fac);
 }
 int main(){
     int n;
     printf("Enter the number : ");
     scanf("%d",&n);
     printf("The factorial of the number is ");
     Factorial(n);
     
 }
