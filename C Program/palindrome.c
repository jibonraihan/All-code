#include <stdio.h>

int main()
{
    int n, rem = 0, a = 0;
    scanf("%d", &n);
    int x = n;
    while (n != 0)
    {
        //a = n % 10;
        rem = rem * 10 + n%10;
        n = n / 10;
    }
    if (rem == x)
    {
        printf("Palindrome");
    }
    else
        printf("Not Palindrome");
    return 0;
}