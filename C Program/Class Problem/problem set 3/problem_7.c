#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a = 0;
    if (n == 0 || n == 1)
    {
        printf("Not prime\n");
        return;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                a = 1;
                break;
            }
        }
    }
    if (a == 1)
    {
        printf("Not prime\n");
    }
    else
    {
        printf("Prime\n");
    }
    return 0;
}