#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int flag = 0;
        string s1;
        cin>>s1;
        for(int i=0; i<s1.length()-2; i++)
        {
            if((s1[i]=='1' && s1[i+1]=='0' && s1[i+2]=='1')|| (s1[i]=='0' && s1[i+1]=='1' && s1[i+2]=='0'))
            {
                flag=1;
                break;
            }
        }
        if(flag) cout<<"Good"<<endl;
        else cout<<"Bad"<<endl;
    }
    return 0;
}