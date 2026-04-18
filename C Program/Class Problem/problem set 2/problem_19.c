#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    
    if(a%2==0)
    {
        a++;
    }
    if(b%2==0)
    {
        b--;
    }
    // int n=(b-a)/2+1, res=n*(2*a+(n-1)*2)/2;
    // printf("%d",res);
    int s=((b-a+2)*(b+a))/4;
    printf("%d", s);
    return 0;
}