#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    float y;
    cin>>x>>y;
    float a=y-x;

    if(x%5==0 && (x+0.50)<=y)
    {
        cout<<fixed<<setprecision(2);
        cout<<a-0.50;
    }
    else 
    {
        cout << fixed << setprecision(2);
        cout<<y;

    }
    return 0;
}