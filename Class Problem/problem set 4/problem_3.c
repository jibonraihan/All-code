#include <stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    // pattern 1
    for (i = 1; i <= n; i++)
    {
        for (k = n - i; k >= 1; k--)
        {
            printf("  ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (k = n - i; k >= 1; k--)
        {
            printf("  ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("\n");

    // pattern 2
    for (i = 1; i <= n; i++)
    {
        for (k = n - i; k >= 1; k--)
        {
            printf("  ");
        }
        for (j = 1; j <= (2 * i) / 2; j++)
        {
            printf("%d ", j);
        }
        for (k = j - 2; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (k = n - i; k >= 1; k--)
        {
            printf("  ");
        }
        for (j = 1; j <= (2 * i) / 2; j++)
        {
            printf("%d ", j);
        }
        for (k = j - 2; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    printf("\n");

    // pattern 3
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (i == j || 2 * n - i == j)
            {
                printf("%d ", i);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i = 2; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (i == j || 2 * n - i == j)
            {
                printf("%d ", i);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}