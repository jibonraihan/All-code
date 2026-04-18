#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a;
    cin>>a;
    int i=(int)a;
    cout<<fixed<<setprecision(3);
    if(a==i) cout<<"int"<<" "<<i<<endl;
    else cout<<"float"<<" "<<i<<" "<<a-i<<endl;
    return 0;
}