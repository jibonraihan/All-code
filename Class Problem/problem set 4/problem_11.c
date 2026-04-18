#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int a = 0, b = 1, next;
    while (a <= n)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}