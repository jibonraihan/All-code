#include <stdio.h>

int main()
{
    int n, i, j, k, x = 2;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            while (1)
            {
                int flag = 1;
                for (k = 2; k < x; k++)
                {
                    if (x % k == 0)
                    {
                        flag = 0;
                        //break;
                    }
                }
                if (flag == 1)
                {
                    printf("%d ", x);
                    x++;
                    break;
                }
                x++;
            }
        }

        printf("\n");
    }
    return 0;
}