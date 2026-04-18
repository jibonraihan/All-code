#include <stdio.h>

int main()
{
    int a1, a2, a3, a4, a5;
    scanf("%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5);
    float avg = (a1 + a2 + a3 + a4 + a5) / 5.0;
    int cnt = 0;
    if (a1 > avg)
    {
        cnt++;
    }
    if (a2 > avg)
    {
        cnt++;
    }
    if (a3 > avg)
    {
        cnt++;
    }
    if (a4 > avg)
    {
        cnt++;
    }
    if (a5 > avg)
    {
        cnt++;
    }

    printf("%d", cnt);
    return 0;
}