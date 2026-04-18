#include <stdio.h>

int main()
{
    int n, a, b, c, d;
    scanf("%d\n", &n);
    long long int sum1 = 0, sum2 = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d\n", &a, &b);
     if(a==b)
     {
        printf("%d\n", a*6);
     }
     else printf("%d\n", a+b);
    }
    return 0;
}