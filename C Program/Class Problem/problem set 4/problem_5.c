#include <stdio.h>

int main()
{
    int n, i, j, a = 1;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        while (1)
        {
            int flag = 1;
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                if (n - 1 == i)
                {
                    printf("%d.", i);
                }
                else
                {
                    printf("%d, ", i);
                }
                break;
            }
            break;
        }
    }

    return 0;
}