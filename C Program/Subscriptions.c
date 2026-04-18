#include<stdio.h>

int main()
{
    int t,a,b; 
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &a,&b);
        x=x+1;
        if(a/6==x){
            printf("%d\n", x*b);
        }
    }
    return 0;
}

