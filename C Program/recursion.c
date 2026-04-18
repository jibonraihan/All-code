#include<stdio.h>

void fun(int i)
{
    if(i==0) return;
    printf("%d ", i);
    fun(i-1);
}
int main()
{
    fun(5);
    printf("\n");
    int x, n,m;
    scanf("%d", &x);
    fun(x);
    printf("\n");
    scanf("%d", &n);
    fun(n);
    printf("\n");
    scanf("%d", &m);
    fun(m);
    return 0;
}