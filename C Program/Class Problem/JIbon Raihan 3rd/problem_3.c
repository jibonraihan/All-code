#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int A[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(A[i]<A[j])
            {
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }

    int sec_large=A[1];

    for(int i=0; i<n; i++)
    {
        if(A[i]!=A[i+1])
        {
            sec_large=A[i+1];
            break;
        }
    }

    printf("The Second largest element is: %d", sec_large);


    return 0;
}

// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int max = INT_MIN;
//     int smax = INT_MIN;
//     int arr[9] = {9, 8, 3, 4, 5, 6, 7, 9, 0};
//     for (int i = 0; i < 9; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     for (int i = 0; i < 9; i++)
//     {
//         if (arr[i] != max && smax < arr[i])
//         {
//             smax = arr[i];
//         }
//     }
//     printf("%d", smax);
//     return 0;
// }