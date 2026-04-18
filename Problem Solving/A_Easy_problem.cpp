#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ar1[3], ar2[3];
        for(int i=0; i<3; i++) cin>>ar1[i];
        for(int i=0; i<3; i++) cin>>ar2[i];
        sort(ar1,ar1+3);
        sort(ar2,ar2+3);
        if(ar1[1]+ar1[2]>ar2[1]+ar2[2]) cout<<"Alice"<<endl;
        if(ar1[1]+ar1[2]<ar2[1]+ar2[2]) cout<<"Bob"<<endl;
        if(ar1[1]+ar1[2]==ar2[1]+ar2[2]) cout<<"Tie"<<endl;

    }
    return 0;
}