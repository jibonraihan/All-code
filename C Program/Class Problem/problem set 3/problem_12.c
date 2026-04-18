#include <stdio.h>

int main()
{
    int a, b, gcd = 0;
    scanf("%d%d", &a, &b);
    int x = a;
    for (int i = 1; i < x; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    printf("%d", gcd);
    return 0;
}