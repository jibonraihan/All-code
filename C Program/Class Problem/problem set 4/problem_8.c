#include <stdio.h>

int main()
{
    int i, j;
    for (i = 100; i <= 999; i++)
    {
        int p = i;
        int x, y, z;
        x = i % 10;
        i /= 10;
        y = i % 10;
        z = i /= 10;

        if (p == x * x * x + y * y * y + z * z * z)
        {
            printf("%d ", p);
        }
        i = p;
    }

    return 0;
}