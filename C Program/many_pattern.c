// patter type 2
#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Input the number ");
    scanf("%d", &n);
    printf("Pattern 1 \n\n");
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern 2 \n\n");
    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern 3 \n\n");
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (row = n - 1; row >= 1; row--)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern 4\n\n");
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern 5\n\n");
    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern 6\n\n");
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (row = n - 1; row >= 1; row--)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern 7\n\n");
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (col == 1)
            {
                printf("*");
            }
            else if (col == n)
            {
                printf("*");
            }
            else if (row == 1)
            {
                printf("*");
            }
            else if (row == n)
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
    printf("Pattern 8\n\n");
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            if (col == 1)
                printf("*");
            else if (row == n)
                printf("*");
            else if (row == col)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("Pattern 9\n\n");
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (col + row == n + 1)
                printf("*");
            else if (row == col)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}