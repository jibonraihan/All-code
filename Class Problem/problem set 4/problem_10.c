#include <stdio.h>
int main()
{
    double n, x, i, j, sum = 0;
    scanf("%lf %lf", &x, &n);
    x = x * 0.0174533;
    for (i = 1; i <= n; i++)
    {
        double pos = 2 * i - 1, xval = 1, fact = 1;
        for (j = 1; j <= pos; j++)
        {
            xval *= x;
        }
        for (j = 1; j <= pos; j++)
        {
            fact *= j;
        }
        if ((int)i % 2 == 0)
        {
            sum -= xval / fact;
        }
        else
        {
            sum += xval / fact;
        }
    }

    printf("%.2lf", sum);

    return 0;
}