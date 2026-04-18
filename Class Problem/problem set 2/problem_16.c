#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    int sr_a = sqrt(a), sr_b=sqrt(b);

    if (sr_a * sr_a != a)
    {
        sr_a+=1;
    }
    printf("%d", sr_b - sr_a +1);

    return 0;
}