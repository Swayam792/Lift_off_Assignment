#include<stdio.h>
#define pi 3.14
int main()
{
    int r,d;
    float circumference,area;
    printf("Enter the radius of circle \n");
    scanf("%d",&r);
    
    d=2*r;
    circumference=2*pi*r;
    area=pi*r*r;
    printf("The diameter of circle is %d\n",d);
    printf("The Circumference of circle is %.2f\n",circumference);
    printf("The Area of circle is %.2f\n",area);
    return 0;
}
