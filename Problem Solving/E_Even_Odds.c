#include <stdio.h>

int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);

    long long mid = (n + 1) / 2;

    if (m <= mid)
    {
        printf("%lld", 2 * m - 1);
    }
    else
    {
        printf("%lld", 2 * (m - mid));
    }
    return 0;
}