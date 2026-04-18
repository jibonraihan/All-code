#include <stdio.h>

void sum(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a + b;
    printf("%d", s);
}

int main()
{
    int x;
    printf("How many times: ");
    scanf("%d", &x);
    for(int i=1; i<=x; i++)
    {
        sum();
        printf("\n");
    }

    return 0;
}