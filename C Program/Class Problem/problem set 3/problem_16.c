#include <stdio.h>

int main()
{
    int n;

    while (1) // always true becuse continous taking input
    {
        scanf("%d", &n);
        if (n % 4 == 0 || n % 400 == 0 && n % 100 != 0)
        {
            printf("Leap Year\n");
        }
        else
        {
            printf("Not a Leap Year\n");
        }
    }
    return 0;
}