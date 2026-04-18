#include<stdio.h>

int main()
{
    int n, fact=1,i=1;
    scanf("%d", &n);
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("%d", fact);
    return 0;
}