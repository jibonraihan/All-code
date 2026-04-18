#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);

    if (x > 1000)
    {
        if (x > 2000)
        {
            printf("Your discount= %.2f", x * 0.2);
        }

        else
        {
            printf("Your discount= %.2f", x * 0.1);
        }
    }

    if (x < 1000)
    {
        if (x > 500)
        {
            printf("Your discount= %.2f", x * 0.05);
        }

        else
        {
            printf("No discount!");
        }
    }

    return 0;
}