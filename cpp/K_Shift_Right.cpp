#include <bits/stdc++.h>
using namespace std;

void fun(vector<int> &v)
{
    int last=v.back();
    for(int i=v.size()-1; i>0; i--)
    {
        v[i]=v[i-1];
    }
    v[0]=last;
}
int main()
{
    int n, x;
    cin>>n>>x;
    int a=x%n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    while(a--)
    {
        fun(v);
    }
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    return 0;
}      
