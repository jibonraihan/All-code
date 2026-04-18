#include <stdio.h>

void fun(int ar[], int index)
{
    if (index < 0)
        return;

    if (index % 2 == 0)
    {
        printf("%d ", ar[index]);
    }

    fun(ar, index - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    fun(ar, n - 1);

    return 0;
}