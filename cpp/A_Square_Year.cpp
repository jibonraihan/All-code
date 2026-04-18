#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int yr, y;
        cin>>yr;
        float x=sqrt(yr);
        y=x;
        if(x!=y) cout<<"-1"<<endl;
        else cout<<y<<" "<<0<<endl;
    }
    return 0;
}