#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if(n==0) return;
    fun(n-1);
    cout << " " << n;
}
int main()
{
    int n;
    while(1)
    {
        cout<<"\nkoto "<<endl;
        cin>>n;
        fun(n);
    }
    //cout<<fun(n);
    return 0;
}