#include <stdio.h>
int palindrome(int n, int pal)
{
    int r;

    while (n != 0)
    {
        r = n % 10;
        pal = pal * 10 + r;
        return palindrome(n / 10, pal);
    }
}
int main()
{
    int n, pal = 0, r;
    printf("Enter a number :\n");
    scanf("%d", &n);
    
    r=palindrome(n, pal);

    if (r == n)
    {
        printf("This is Palindrome");
    }
    else
    {
        printf("This is not Palindrome");
    }
    return 0;
}