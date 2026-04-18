#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m=1;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j || i+j==n+1)
            {
                cout<<m;
                m++;
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}