#include <stdio.h>
#include <math.h>

int main()
{
    int n, x, y = 0, sum = 0, z;
    scanf("%d", &n);
    x = n;

    while (x)
    {
        y++;
        x = x / 10;
    }

    x = n;
    while (x)
    {
        int num = x % 10;
        sum = sum + pow(num, y);
        x = x / 10;
    }

    //printf("%d\n", sum);
    (sum==n)? printf("Yes\n"):printf("No\n");
    return 0;
}