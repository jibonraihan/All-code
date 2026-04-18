#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, sum;
        cin>>n>>sum;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        
        int flag=0;
        for(int i=0; i<n && !flag; i++)
        {
           for(int j=i+1; j<n && !flag; j++)
           {
            for(int k=j+1; k<n && !flag; k++)
            {
                if ((a[i] + a[j] + a[k]) == sum)
                {
                    flag = 1;
                    break;
                }
            }
           }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}