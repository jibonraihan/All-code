#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
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