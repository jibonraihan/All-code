#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    int biyog=a-b;
    if(biyog>=0)
    {
        printf("%d", biyog);
    }
    else printf("0");
    return 0;
}