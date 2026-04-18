#include <stdio.h>

void fun(int x, int n)
{

    if (x < n)
        return;
    printf("%d ", x);
    fun(x - 1, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n, 2);
    printf("1");
    return 0;
}