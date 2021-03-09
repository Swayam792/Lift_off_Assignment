#include<stdio.h>
long long int square;
void Squareof_num(long int p){
    square=p*p;
    printf("The square of %d is %d",p,square);
}
int main(){
    long int n;
    printf("Enter the number : \n");
    scanf("%d",&n);
    Squareof_num(n);
return 0;
}