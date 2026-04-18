#include<stdio.h>

int main()
{
    int n,odd,even;
    scanf("%d",&n);
    if(n%2==0)
    {
        odd=n/2;
        even=n/2;
    }
    else{
        odd=n/2+1;
        even=n/2;
    }
    printf("%d",odd*even);
    return 0;
}