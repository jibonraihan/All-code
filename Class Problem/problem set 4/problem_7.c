#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n > 9)
    {
        int sum = 0, temp = n;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        n = sum;
    }
    printf("%d", n);
    return 0;
}