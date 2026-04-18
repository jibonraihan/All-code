#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar1[n];
    for(int i=0; i<n; i++) cin>>ar1[i];

    int m;
    cin>>m;
    int ar2[m];
    for(int i=0; i<m; i++) cin>>ar2[i];

    int a=n+m;
    int newarr[a];


    for(int i=0; i<n; i++) newarr[i]=ar1[i];
    for(int i=0; i<m; i++) newarr[n+i]=ar2[i];

    for (int i = 0; i < a - 1; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (newarr[j] < newarr[i])
            {
                int temp = newarr[j];
                newarr[j] = newarr[i];
                newarr[i] = temp;
            }
        }
    }
    for (int i = 0; i < a; i++) cout << newarr[i] << " ";

    return 0;
}