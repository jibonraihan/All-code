#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    for(int i=0; i<n; i++)
    {
        ar[i]=A[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(A[i]>A[j])
            {
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }

    int flag=1;

    for(int i=0; i<n; i++)
    {
        if(ar[i]!=A[i])
        {
            flag=0;
            break;
        }
    }

    if(flag)
    {
        printf("Sorted");
    }
    else{
        printf("Not Sorted\n");
        printf("Before sorting: ");
        for(int i=0; i<n; i++)
        {
            printf("%d ", ar[i]);
        }
        printf("\nAfter sorting: ");
        for(int i=0; i<n; i++)
        {
            printf("%d ", A[i]);
        }
    }

    return 0;
}


