#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=5;
    int x=n+m;

    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=x-i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    m-=2;

    for(int i=0; i<5; i++)
    {
        cout<<"     ";
        for(int j=0; j<n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}
