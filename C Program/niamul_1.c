#include <stdio.h>
int main()
{
    int n, x, y, z;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        if (x > y)
        {
            if (x > z)
            {
                if (z > y)
                    printf("%d\n", y);
                else
                    printf("%d\n", z);
            }
            else
                printf("%d", x);
        }
        else if (y > z)
        {
            if (x > z)
                printf("%d\n", x);
            else
                printf("%d\n", z);
        }
        else
            printf("%d\n", y);
    }
    return 0;
}