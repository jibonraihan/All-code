#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int sm_a=0, sm_b=0, sm_c=0;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
       sm_a+=a;
       sm_b+=b;
       sm_c+=c;
    }

    if(sm_a==0 && sm_b==0 && sm_c==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}