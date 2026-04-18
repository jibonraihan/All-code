#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int x=a/1000;

    if (x == 1)
    {
        if (a / 100 == 11)
        {
            if (a % 2 == 0)
            {
                printf("Year-1, Semester-1, Type: Lab");
            }
            else
            {
                printf("Year-1, Semester-1, Type: Theory");
            }
        }
        else if (a / 100 == 12)
        {
            if (a % 2 == 0)
            {
                printf("Year-1, Semester-2, Type: Lab");
            }
            else
            {
                printf("Year-1, Semester-2, Type: Theory");
            }
        }
    }

    if (x == 2)
    {
        if (a / 100 == 21)
        {
            if (a % 2 == 0)
            {
                printf("Year-2, Semester-1, Type: Lab");
            }
            else
            {
                printf("Year-2, Semester-1, Type: Theory");
            }
        }
        else if (a / 100 == 22)
        {
            if (a % 2 == 0)
            {
                printf("Year-2, Semester-2, Type: Lab");
            }
            else
            {
                printf("Year-2, Semester-2, Type: Theory");
            }
        }
    }

    if (x == 3)
    {
        if (a / 100 == 31)
        {
            if (a % 2 == 0)
            {
                printf("Year-3, Semester-1, Type: Lab");
            }
            else
            {
                printf("Year-3, Semester-1, Type: Theory");
            }
        }
        else if (a / 100 == 32)
        {
            if (a % 2 == 0)
            {
                printf("Year-3, Semester-2, Type: Lab");
            }
            else
            {
                printf("Year-3, Semester-2, Type: Theory");
            }
        }
    }

    if (x == 4)
    {
        if (a / 100 == 41)
        {
            if (a % 2 == 0)
            {
                printf("Year-4, Semester-1, Type: Lab");
            }
            else
            {
                printf("Year-4, Semester-1, Type: Theory");
            }
        }
        else if (a / 100 == 42)
        {
            if (a % 2 == 0)
            {
                printf("Year-4, Semester-2, Type: Lab");
            }
            else
            {
                printf("Year-4, Semester-2, Type: Theory");
            }
        }
    }

    return 0;
}