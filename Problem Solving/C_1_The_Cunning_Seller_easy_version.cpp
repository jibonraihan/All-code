#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=1, b=10;
        int x=n/3;
        cout<<(x*b)+(n%3)*3<<endl;
    }
    return 0;
}