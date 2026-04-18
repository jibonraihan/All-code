#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a = 1, deci = 0;
    while (n)
    {
        //int remi = n % 2;
        if (n%2 != 0)
        {
            deci += a;
        }
        a *= 2;
        n /= 10;
    }
    printf("%d", deci);
    return 0;
}