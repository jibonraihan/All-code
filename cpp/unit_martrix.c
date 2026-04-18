#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    printf("\n");

    int flag = 1;
    if (n != m)
    {
        flag = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                if (ar[i][j] != 1)
                {
                    flag = 0;
                }
                continue;
            }
            if(ar[i][j]!=0)
            {
                flag=0;
            }
        }
    }

    if (flag == 1)
    {
        printf("Unit Matrix");
    }
    else
    {
        printf("Not Unit Matrix");
    }

    return 0;
}