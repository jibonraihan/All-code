#include <stdio.h>

int binary(int n)
{
    for (int i = 7; i >= 0; i--) // 8 বিট ধরে চেক করা
    {
        int bit = (n >> i) & 1; // প্রতিটি বিট বের করা
        printf("%d", bit);
    }
}
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    binary(a); 
    printf(".");
    binary(b);
    printf(".");
    binary(c); 
    printf(".");
    binary(d);
    printf("\n");
    return 0;
}
