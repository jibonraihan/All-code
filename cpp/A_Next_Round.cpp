#include <iostream>
using namespace std;

int main()
{
    int x, y, count = 0;
    cin >> x >> y;

    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < x; i++)
    {
        if (arr[i] >= arr[y - 1] && arr[i] != 0)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
