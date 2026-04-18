#include <stdio.h>

int main()
{
    int a, b, c;
    scanf(" %d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d%d", &b, &c);
    arr[b] = c;
    for (int i = a - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}