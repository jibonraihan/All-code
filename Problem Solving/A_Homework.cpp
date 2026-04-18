#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1, a2;
        string s1,s2,c;
        cin>>a1>>s1;
        cin>>a2>>s2;
        cin>>c;
        //string r=s1;
        for(int i=0; i<a2; i++)
        {
            if(c[i]=='D')
            {
                s1+=s2[i];
            }
            else {
                s1=(s2[i]+s1);
            }
        }
        cout<<s1<<endl;
    }

    return 0;
}