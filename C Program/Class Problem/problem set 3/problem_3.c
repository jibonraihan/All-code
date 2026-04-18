#include <stdio.h>

int main()
{
    int n, num0 = 0, num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0;
    scanf("%d", &n);
    while (n)
    {
        int remi = n % 10;
        if (remi == 0)
        {
            num0++;
        }
        else if (remi == 1)
        {
            num1++;
        }
        else if (remi == 2)
        {
            num2++;
        }
        else if (remi == 3)
        {
            num3++;
        }
        else if (remi == 4)
        {
            num4++;
        }
        else if (remi == 5)
        {
            num5++;
        }
        else if (remi == 6)
        {
            num6++;
        }
        else if (remi == 7)
        {
            num7++;
        }
        else if (remi == 8)
        {
            num8++;
        }
        else if (remi == 9)
        {
            num9++;
        }
        n /= 10;
    }
    if (num0 != 0)
    {
        printf("0 -> %d times\n", num0);
    }
    if (num1 != 0)
    {
        printf("1 -> %d times\n", num1);
    }
    if (num2 != 0)
    {
        printf("2 -> %d times\n", num2);
    }
    if (num3 != 0)
    {
        printf("3 -> %d times\n", num3);
    }
    if (num4 != 0)
    {
        printf("4 -> %d times\n", num4);
    }
    if (num5 != 0)
    {
        printf("5 -> %d times\n", num5);
    }
    if (num6 != 0)
    {
        printf("6 -> %d times\n", num6);
    }
    if (num7 != 0)
    {
        printf("7 -> %d times\n", num7);
    }
    if (num8 != 0)
    {
        printf("8 -> %d times\n", num8);
    }
    if (num9 != 0)
    {
        printf("9 -> %d times\n", num9);
    }

    return 0;
}