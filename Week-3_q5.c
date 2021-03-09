#include <stdio.h>
int palindrome(int n, int pal, int copy)
{
    int r;

    while (n != 0)
    {
        r = n % 10;
        pal = pal * 10 + r;
        return palindrome(n / 10, pal, copy);
    }

    if (pal == copy)
    {
        printf("This is Palindrome");
    }
    else
    {
        printf("This is not Palindrome");
    }
}
int main()
{
    int n, pal = 0, copy;
    printf("Enter a number :\n");
    scanf("%d", &n);
    copy = n;
    palindrome(n, pal, copy);
    return 0;
}