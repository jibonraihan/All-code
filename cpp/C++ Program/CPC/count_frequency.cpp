#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
        cin >> ar[i];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[j] < ar[i])
            {
                int temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
    }
    int count1[100], count=1;
    for (int i = 0; i < n; i++)
    {
        if(ar[i]==ar[i+1]) count++;
        count1[i]=count;
        if(ar[i]!=ar[i+1]) count=1;
        cout << ar[i] << " occurs "<<count1[i]<<" times"<<endl;
    }

    return 0;
}