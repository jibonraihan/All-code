#include <stdio.h>

int main()
{
    int a, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        printf("%d\n", i);
        sum += i;
    }
    printf("The sum of the numbers: %d", sum);
    return 0;
}