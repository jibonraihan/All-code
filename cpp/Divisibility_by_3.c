#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a, sum = 0;
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
        sum = sum + ar[i];
    }
    if (sum % 3 == 0)
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}
