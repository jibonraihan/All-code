#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    n = n + 1 / 2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n * 2; j++)
        {
            if (i >= j || i + j >= n * 2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n * 2; j++)
        {
            if (i + j <= n || j - i >= n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}