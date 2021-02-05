#include<stdio.h>


int main()
{
    int mth,phy,che,bio,comp,obtained_mark,total_mark;
    
    float per;
    printf("Enter marks you obtained in Physics,Chemistry,Math,Biology,Compuer respectively\n");
    scanf("%d %d %d %d %d",&phy,&che,&mth,&bio,&comp);
    obtained_mark=(phy+che+mth+bio+comp);
    per=obtained_mark/5;
    if (per>=90){
      printf("You have secured Grade A");
    }else if(per>=80 && per<90){
     printf("You have secured Grade B");
    }
    else if(per>=70 && per<80){
     printf("You have secured Grade C");
    }
    else if(per>=60 && per<70){
     printf("You have secured Grade D");
    }
    else if(per>=40 && per<60){
     printf("You have secured Grade E");
    }
    else if(per<40){
     printf("You have secured Grade F");
    }
    
    return 0;
}