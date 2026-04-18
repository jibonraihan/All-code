#include<stdio.h>

int main()
{
    int n, i, index;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for(i=1; i<=n; i++){
        // printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Which number of element you want to view(1 to %d): ", n);

    scanf ("%d", &index);

    if(index >= 0 && index < n)
    {
        printf("The %d number element is: %d\n", index, arr[index]);
    }
    else{
        printf("Not Found! Please enter a value between 1 and %d.\n", n);
    }
    return 0;
}