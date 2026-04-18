#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, min = 99999, max = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        sum += x;
        if (x < min)
        {
            min = x;
        }
        if (x > max)
        {
            max = x;
        }
    }
    printf("Sum = %d\nAverage = %f\nMinimum = %d\nMaximun = %d", sum, 1.0 * sum / n, min, max);
    return 0;
}