#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    
    int yrs=a/365;
    int rem1=a-yrs*365;
    int mnth=rem1/30;
    int rem2=rem1-mnth*30;

    cout<<yrs<<" years"<<endl;
    cout<<mnth<<" months"<<endl;
    cout<<rem2<<" days"<<endl;
    return 0;
}