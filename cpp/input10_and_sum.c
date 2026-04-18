#include<stdio.h>

int main()
{
    int num, sum=0;

    for(int i=1; i<=10; i++)
    {
        scanf("%d", &num);
        sum+=num;
    }
    printf("Sum of the numbers: %d", sum);

    return 0;
}
