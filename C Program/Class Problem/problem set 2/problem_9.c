#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    if(a%400==0)
    {
        printf("Yes");
    }
    else if(a%4==0 && a%100!=0)
    {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}
//1968 is leap year but a mistake on question paper