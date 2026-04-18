#include<stdio.h>

void fun(int n, int m)
{
    if(n==0)
    {
        printf("%d", m);
        return;
    }
    fun(n-1, n+m);
    return;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    fun(n,0);
    return 0;
}