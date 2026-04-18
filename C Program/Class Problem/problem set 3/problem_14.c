#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int flag = 0;
    for (int i = 1; i <= n; i *= 2)
    {
        if (n == i)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("power of 2\n");
    }
    else
    {
        printf("Not power of 2\n");
    }
    return 0;
}