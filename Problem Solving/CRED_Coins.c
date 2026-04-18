#include<stdio.h>

int main()
{
    int x, a,b;
    scanf("%d", &x);
    while(x--)
    {
        scanf("%d %d\n", &a, &b);
        int mul=a*b;
        int z=mul/100;
        printf("%d\n", z);


    }
    return 0;
}