#include <bits/stdc++.h>
using namespace std;

void prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1) cout<<"NO"<<endl;
        else if(n==2) cout<<"YES"<<endl;
        else 
        prime(n);
    }
    return 0;
}