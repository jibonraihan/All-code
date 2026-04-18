#include <stdio.h>

int main()
{
    // int arr1[5];
    // int arr2[5];

    // for(int i=0; i<5; i++)
    // {
    //     scanf("%d",&arr1[i]);
    // }
    // for(int i=0; i<5; i++)
    // {
    //     scanf("%d", &arr2[i]);
    // }

    // for(int i=0; i<5; i++)
    // {
    //     printf("%d ", arr1[i]+arr2[i]);
    // }
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);

    return 0;
}