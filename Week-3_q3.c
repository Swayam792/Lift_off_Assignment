#include<stdio.h>
int GCD(int n1,int n2){
  int gcd;
    for(int i=1;i<=n1 && i<=n2;i++){
      if(n1%i==0 && n2%i==0){
        gcd=i;
      }
    }
    return gcd;
}
int main(){
  int n1,n2;
  printf("Enter two numbers : \n");
  scanf("%d %d",&n1,&n2);
  int gcd=GCD(n1,n2);  
  int lcm=(n1*n2)/gcd;
  printf("The GCD of %d and %d is %d \n",n1,n2,gcd);
  
  printf("The lcm of %d and %d is %d ",n1,n2,lcm);
return 0;
}