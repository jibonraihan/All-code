#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int a=s.length(), sum=0;
    for(int i=0; i<a; i++)
    {
        sum=sum+s[i]-'0';
    }

    cout<<sum<<endl;
    
    return 0;
}