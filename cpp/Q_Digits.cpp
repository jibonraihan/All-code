#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long int a;
        cin>>a;
        if(a==0) cout<<0<<endl;
        else 
        {
            while (a > 0)
            {
                cout << a % 10 << " ";
                a /= 10;
            }
            cout<<endl;
        }
     
    }
    return 0;
}