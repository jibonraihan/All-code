#include<stdio.h>

int main()
{
    int a1,a2,a3;
    scanf("%d%d%d",&a1,&a2,&a3);
    int max=a1;
    if(a2>max)
    {
        max=a2;
    }
    if(a3>max)
    {
        max=a3;
    }
    int min=a1;
    if(a2<min)
    {
        min=a2;
    }
    if(a3<min)
    {
        min=a3;
    }
    int mint=(a1+a2+a3) - (max+min);

    if(min*min + mint*mint == max*max)
    {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}