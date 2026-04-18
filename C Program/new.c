#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n >= 0)
    {
        printf("Positive\n");
        if (n % 2 == 0)
        {
            printf("Even\n");
        }
        else
            printf("Odd\n");
    }

    else
    {
        printf("Negative\n");
        if (n % 3 == 0)
        {
            printf("Multiple 0f 3\n");
        }
        else
            printf("Not multiple of 3");
    }
    return 0;
}
