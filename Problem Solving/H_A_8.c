#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int x = (a - b);
    int y=x%10;
    if(y>8)
    {
        printf("%d ", x - 1);
    }
    else{
        printf("%d", x + 1);
    }
    
    return 0;
}