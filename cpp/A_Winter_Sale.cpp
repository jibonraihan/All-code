#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    float x=(1-(float)a/100);
    cout<<fixed<<setprecision(2)<<b/x<<endl;

    return 0;
}