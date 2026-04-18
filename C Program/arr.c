#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d is: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are: [");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");

    for(int i=0; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d is the duplicat element.\n", arr[i]);
            }
        }
    }


    return 0;
}