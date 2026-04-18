#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }
    if (num == sum)
        printf("perfect number");
    else
        printf("Not a ferfect number");
    return 0;
}