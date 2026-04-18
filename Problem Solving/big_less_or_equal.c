#include <stdio.h>

int main()
{
    int a, b;
    char x;
    scanf("%d", &a);
    scanf("%c", &x);
    scanf("%d", &b);

    if (a > b && x == '>')
    {
        printf("TRUE");
    }
    else if (a > b && x == '<')
    {
        printf("FALSE");
    }
    else if (b > a && x == '>')
    {
        printf("FALSE");
    }
    else if (b > a && x == '<')
    {
        printf("TRUE");
    }
    else if (a == b && x == '=')
    {
        printf("TRUE");
    }
    else
    printf("FALSE");
    
    return 0;
}