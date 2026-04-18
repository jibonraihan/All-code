#include <bits/stdc++.h>
using namespace std;

int fun(int x, int n)
{
    long long s=0; 
    for(int i=2; i<=n; i+=2)
    {
        long long a=1;
        for(int j=1; j<=i; j++)
        {
            a=a*x;;
        }
        s=s+a;
    }
    return s;
    //cout<<s<<endl;
}
int main()
{
    int x,n;
    cin>>x>>n;
    long long an= fun(x,n);
    cout<<an<<endl;
    return 0;
}