#include <stdio.h>

int main()
{
    int num, n = 1;
    printf("Enter number: ");
    scanf("%d", &num);

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            n = 0;
            break;
        }
    }
    if (num > 1 && n)
        printf("%d is a prime\n", num);
    else
        printf("%d is not a prime", num);
    return 0;
}