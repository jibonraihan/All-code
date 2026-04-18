#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (n == i * i)
        {
            a = 1;
            b = i;
            break;
        }
    }
    if (a)
    {
        printf("%d", b);
    }
    else
    {
        printf("N/A");
    }
    return 0;
}