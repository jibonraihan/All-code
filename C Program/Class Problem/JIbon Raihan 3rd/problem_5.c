#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar1[n];
    int ar2[n];

    printf("First array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar1[i]);
    }
    printf("Second array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar2[i]);
    }

    printf("Before swapping-\n");
    printf("First array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar1[i]);
    }
    printf("\nSecond array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int temp = ar1[i];
        ar1[i] = ar2[i];
        ar2[i] = temp;
    }

    printf("\nAfter swapping-\n");
    printf("First array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar1[i]);
    }
    printf("\nSecond array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar2[i]);
    }

    return 0;
}
