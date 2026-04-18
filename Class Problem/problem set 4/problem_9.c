#include <stdio.h>

int main()
{
    int n, a, b, c, i, j;
    scanf("%d%d%d%d", &n, &a, &b, &c);
    int found = 0;
    for (i = 1; i <= 100; i++)
    {
        long long A = 1, B = 1;
        for (j = 1; j <= n; j++)
        {
            A = A * i;
        }
        B = i * i * i;
        long long X = A * a + B * b;
        if (X == c)
        {
            printf("%d", i);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("No solution");
    }
    return 0;
}