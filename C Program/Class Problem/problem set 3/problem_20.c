#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int f=0, s = 1, nxt;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", f);
        nxt = f + s;
        f = s;
        s = nxt;
    }
    return 0;
}