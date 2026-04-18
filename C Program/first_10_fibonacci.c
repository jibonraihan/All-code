#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    for (int m = 1; m <= x; m++)
    {
        int next, i = 1, a = 0, b = 1;
        while (i <= m)
        {
            printf("%d ", a);
            next = a + b;
            a = b;
            b = next;
            i++;
        }
        printf("\n");
    }

    return 0;
}