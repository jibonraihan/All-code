#include <stdio.h>

int main()
{
    int a, b;
    char x;
    while (1)//always true becuse continous taking input
    {
        scanf("%d %c %d", &a, &b, &x);
        switch (x)
        {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '.':
            printf("%d\n", a * b);
            break;
        case '/':
            printf("%f\n", 1.0 * a / b);
            break;
        default:
            printf("Input valid expression\n");
            break;
        }
    }
    return 0;
}