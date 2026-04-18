#include<stdio.h>

int main()
{
    int a,x,n;
    scanf("%d", &a);
    while(a--)
    {
        scanf("%d %d", &x,&n);
        int sum=(x*4)+n;
        printf("%d\n", sum);
    }
    return 0;
}