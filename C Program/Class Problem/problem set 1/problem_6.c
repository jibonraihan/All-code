#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float f=(1/(float)a + 1/(float)b);
    printf("%dohms %.2fohms", a+b, 1/f);
    return 0;
}