#include <stdio.h>

int main()
{
    int num, n=1;
    printf("Enter number of rows: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j < num; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=(2*i-1); j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}