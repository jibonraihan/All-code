#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }

    if(sum>=1) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
    return 0;
}