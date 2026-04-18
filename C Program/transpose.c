#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of colums: ");
    scanf("%d", &m);

    printf("Enter all the elements: ");
    int arr[n][m], ar[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // swaping
            // int temp = arr[i][j];
            // arr[i][j] = arr[j][i];
            // arr[j][i] = temp;
            ar[j][i]=arr[i][j];
        }
    }
    printf("\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}