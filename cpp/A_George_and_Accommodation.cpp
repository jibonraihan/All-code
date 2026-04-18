#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, cnt=0;
    cin>>a;
    while(a--)
    {
        int x,y;
        cin>>x>>y;
        if(x+2<=y) cnt++;
    }
    cout<<cnt;
    cnt=0;
    return 0;
}