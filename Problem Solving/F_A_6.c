#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    int x=a+b;
    printf("%d %d", x-a-1, x-b-1);
    return 0;
}