#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a < 0)
    {
        printf("The value of n = -1");
    }
    else if (a == 0)
    {
        printf("The value of n = 0");
    }
    else
    {
        printf("The value of n = 1");
    }
        return 0;
}