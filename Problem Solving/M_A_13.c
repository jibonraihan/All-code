#include <stdio.h>

int main()
{
    int t,x=1;
    scanf("%d", &t);
    while(t--)
    {
        int sum = 0;
        int a, b;
        scanf("%d%d", &a, &b);
        while (a <= b)
        {
            if (a % 2 != 0)
            {
                sum += a;
            }
            a++;
        }
        printf("Case %d: %d\n", x, sum);
        x++;
    }
    return 0;
}