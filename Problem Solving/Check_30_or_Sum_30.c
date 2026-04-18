#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d\n", &n);
    long long int sum1 = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d\n", &a, &b);
        sum1 = a + b;
        if(sum1==30)
        {
            printf("YES\n");
        }
        else if (a == 30 && b!=30)
        {
            printf("YES\n");
        }
        else  if (b == 30 && a!=30)
        {
            printf("YES\n");
        }
        else printf("NO");

    }
    return 0;
}