#include<stdio.h>

int main()
{
    int a=1, product=1;
    while(a<=5)
    {
        product*=a;
        a++;
    }
    printf("%d", product);
    return 0;
}