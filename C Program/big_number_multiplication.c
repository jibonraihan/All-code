#include <stdio.h>

int main()
{

    char s1[1001], result[1002];
    int n;
    scanf("%s", s1);
    scanf("%d", &n);
    int i = strlen(s1) - 1;
    int k = 0, carry = 0;

    while (i >= 0 || carry)
    {
        int a = 0;
        if (i >= 0)
            a = s1[i--] - '0';

        int sum = a*n + carry;
        result[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }
    for (int x = 0; x < k / 2; x++)
    {
        char temp = result[x];
        result[x] = result[k - 1 - x];
        result[k - 1 - x] = temp;
    }
    result[k] = '\0';
    puts (result);

    return 0;
}