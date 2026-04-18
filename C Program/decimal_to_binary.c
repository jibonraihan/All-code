#include <stdio.h>

int main()
{
    int n;
    printf("Enter a decimal number (0-255): ");
    scanf("%d", &n);

    printf("8-bit Binary: ");

    for (int i = 7; i >= 0; i--) // 8 বিট ধরে চেক করা
    {
        int bit = (n >> i) & 1; // প্রতিটি বিট বের করা
        printf("%d", bit);
    }
    printf("\n");
    return 0;
}
