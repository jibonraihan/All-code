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

    int large=A[0], small=A[0], sum=A[0];
    for(int i=1; i<n; i++)
    {
        if(large<A[i])
        {
            large=A[i];
        }
        if(small>A[i])
        {
            small=A[i];
        }
        sum+=A[i];
    }
    float avg=(float)sum/n;

    printf("The largest value is: %d\n", large);
    printf("The smalllest value is: %d\n", small);
    printf("The summation value is: %d\n", sum);
    printf("The average value is: %.6f\n", avg);



    return 0;
}

