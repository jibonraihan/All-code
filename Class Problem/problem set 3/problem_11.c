#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int odd_position = 0, even_position = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            odd_position += i;
        }
        else
        {
            even_position += i;
        }
    }
    printf("%d", odd_position - even_position);

    return 0;
}