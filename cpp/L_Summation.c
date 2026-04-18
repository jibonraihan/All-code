#include <stdio.h>

long long int fun(int x[], int y)
{
    
    if (y == 0)
        return 0;
   
    return x[y-1] + fun(x, y-1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long int ssm;
    ssm = fun(arr, n);

    printf("%lld\n", ssm);
    return 0;
}