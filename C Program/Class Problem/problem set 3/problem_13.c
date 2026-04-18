#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a = 0, b = 0;
    int flag = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (n * n == i * i + j * j)
            {
                a = i;
                b = j;
                flag = 1;
                break;
            }
        }
    }
    if (flag)
    {
        printf("The tringle is right angle\n");
        printf("Other two side : %d %d", a, b);
    }
    else
    {
        printf("The tringle is not right angle\n");
    }
    return 0;
}