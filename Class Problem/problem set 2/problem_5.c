#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a < 0)
    {
        printf("Freezing weather");
    }
    else if (a >= 0 && a < 10)
    {
        printf("Very Cold weather");
    }
    else if (a >= 10 && a < 20)
    {
        printf("Cold weather");
    }
    else if (a >= 20 && a < 30)
    {
        printf("Normal in Temp");
    }
    else if (a >= 30 && a < 40)
    {
        printf("Its Hot");
    }
    else if (a >= 40)
    {
        printf("Very Hot");
    }
    return 0;
}