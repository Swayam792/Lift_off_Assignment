#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    printf("Enter the string you want\n");
    scanf("%s",s);
    int count=0;
    gets(s);
    int len=strlen(s);
    for(int I=0;I<len;I++){
    
    if(s[I]==' '){
      count++;
    }
    }
    printf("The total no. of word is %d",count+1);
    return 0;
}