#include <stdio.h>

int main()
{
    int n, i, j, a = 1;
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        int flag = 0;
        for (j = 2; j * j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            continue;
        }
        while (a > 0)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                n /= i;
            }
            a--;
        }
        while (n % i == 0)
        {
            printf(" X %d", i);
            n /= i;
        }
    }
    return 0;
}