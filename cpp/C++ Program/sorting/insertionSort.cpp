#include <bits/stdc++.h>
using namespace std;

//insertion sort
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int min = arr[i];
        int j= i-1;
        while(j>=0 && arr[j]>min){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = min;
    }
}
int main()
{
    int n;
    cout << "Enter number of element: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertionSort(arr, n);
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}