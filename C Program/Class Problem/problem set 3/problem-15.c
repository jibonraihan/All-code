#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    // int x = n;
    // for (n; n <= m; n += x)
    // {
    //     printf("%d ", n);
    // }

    for(int i=1; i<=m; i++)
    {
        if(n*i<=m)
            printf("%d ", n*i);
    }
    return 0;
}