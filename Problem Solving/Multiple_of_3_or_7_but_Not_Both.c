#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d\n", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d\n", &a);
        if (a > 0)
        {
            if (a % 3 == 0 && a%7!=0)
            {
                printf("YES\n");
            }
            else if (a % 7 == 0 && a%3!=0)
            {
                printf("YES\n");
            }
            else
                printf("NO\n");
        }
    }
    return 0;
}