#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of thr array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &arr[i]);
        }

    return 0;
}