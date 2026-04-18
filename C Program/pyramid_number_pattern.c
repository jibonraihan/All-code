#include<stdio.h>

int main()
{
    int n;
     scanf("%d", &n);
    int i, j, k, x = 0;
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
    return 0;
}