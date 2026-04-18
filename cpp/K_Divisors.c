#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int val=1;
    for(int i=1; i<n; i++)
    {
       if(n%i==0)
       {
        val=i;
        printf("%d\n", i);
       }

    }
    printf("%d",n);
    return 0;
}