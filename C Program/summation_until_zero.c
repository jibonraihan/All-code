#include<stdio.h>

int main()
{
    int sum=0;
    while(!0)
    {
        int n;
        scanf("%d",&n);
        sum+=n;
        if(n==0) break;
    }
    printf("%d", sum);
    return 0;
}