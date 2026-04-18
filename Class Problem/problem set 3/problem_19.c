#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, x = 1;
    while (n)
    {
        //int remi = n % 10;
        if (x % 2 != 0)
        {
            sum += n%10;
        }
        n /= 10;
        x++;
    }
    printf("%d", sum);
    return 0;
}
