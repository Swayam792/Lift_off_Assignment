#include<stdio.h>


int main()
{
    float c , result;
     
    printf("Enter celcius \n");
    scanf("%f",&c);
    result=(c*9/5)+32;
    printf("The %f°C is %f°F",c,result);
    return 0;
}
