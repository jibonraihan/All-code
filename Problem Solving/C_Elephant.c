#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int step = n/5;
    
    if(n%5!=0)
    {
        step ++;
    }
    
    printf("%d", step);
    return 0;
}