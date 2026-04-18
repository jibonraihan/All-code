#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, j, k;
    // pattern 1
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // pattern 2
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j % 2);
        }
        printf("\n");
    }
    printf("\n");

    // pattern 3
    int count = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (count % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            count++;
        }
        printf("\n");
    }
    printf("\n");

    // pattern 4
    int a = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    printf("\n");

    // pattern 5
    for (i = 1; i <= n; i++)
    {
        int b = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", b);
            b += 2;
        }
        printf("\n");
    }
    printf("\n");

    // pattern 6
    for (i = 1; i <= n; i++)
    {
        for (k = n - i; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // pattern 7
    for (i = 1; i <= n; i++)
    {
        for (k = n - i; k >= 1; k--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // pattern 8
    printf("Input for 8th pattern: ");
    int p, digit = 0;
    scanf("%d", &p);
    int q = p;
    while (p != 0) //counting digits
    {
        digit++;
        p /= 10;
    }
    for (i = 1; i <= digit; i++)
    {
        int x = q;
        for (k = digit - i; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            int remi = 0;
            printf("%d", remi * 10 + x % 10);
            x /= 10;
        }
        printf("\n");
    }
    printf("\n");

    // pattern 9
    int x = 0;
    for (i = 1; i <= n; i++)
    {
        for (k = n - i; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i) / 2; j++)
        {
            printf("%d", j);
        }
        for (k = j - 2; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    printf("\n");

    // pattern 10
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf(" ");
        }
        int x = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", x);
            x = x * (i - j) / j;
        }

        printf("\n");
    }
    return 0;
}