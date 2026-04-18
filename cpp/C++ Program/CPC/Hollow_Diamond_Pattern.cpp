#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x=i, y=j;
            if(i>n/2+1)
            {
                x=n+1-i;
            }
            if(j>n/2+1)
            {
                y=n+1-j;
            }
            if(x+y==n/2+2)
            {
                cout<<"*";
            }
            else {cout<<" ";}
        }
        cout << endl;
    }
    return 0;
}