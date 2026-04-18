#include<stdio.h>

void reverse(int arr[])
{
    int i=0;
    int j=7;
    while(i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}

int main()
{
    int arr[8] = {4,6,9,12,16,20,25,33};
    reverse(arr);
    for(int i=0; i<8; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}