#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("I hate ");
    }
    else 
    {
        for (int i = 1; i <= n; i++)
        {
            if(i!=1)
            {
                printf("that");
            }
            if (i % 2 != 0)
            {
                printf(" I hate ");
            }
            else
            {
                printf(" I love ");
            }
        }
    }
    printf("it");
    return 0;
}