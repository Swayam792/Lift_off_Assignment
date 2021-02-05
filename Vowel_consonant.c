#include<stdio.h>

int main()
{
    printf("Enter the character\n");
    char ch;
    scanf("%c",&ch);
    switch(ch){
     case 'a' :
       printf("This is vowel");
       break;
     case 'e' :
       printf("This is vowel");
       break;
    case 'i' :
       printf("This is vowel");
      break;
    case 'o' :
       printf("This is vowel");
       break;
    case 'u' :
       printf("This is vowel");
       break;
     default :
      
       printf("This is consonant");
    
    }
    return 0;
}