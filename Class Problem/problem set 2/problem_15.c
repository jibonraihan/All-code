#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int sr=sqrt(a);
    if(sr*sr==a)
    {
        printf("Yes");
    }
    else 
    {
        printf("No");
    }
    return 0;
}