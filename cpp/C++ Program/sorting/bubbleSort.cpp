#include <bits/stdc++.h>
using namespace std;

//bubble sort
void bubbleSort(int arr[], int n)
{
    bool isSwap;
    for (int i = 0; i < n - 1; i++)
    {
        isSwap = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
                isSwap = true;
            }
        }
        if(!isSwap) break;
    }
    if (!isSwap)
    {
        cout << "No sort needed." << endl;
    }
    else
    {
        cout << "Sort done!" << endl;
    }
}
int main()
{
    int n;
    cout << "Enter number of element: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}