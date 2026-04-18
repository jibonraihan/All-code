#include <stdio.h>

int main()
{
    int n, i, j, k, count = 0;
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (i * i + j * j == k * k && i + j + k <= n)
                {
                    count++;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}
