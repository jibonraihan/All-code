#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b,d;
    char c,e;

    cin>>a>>c>>b>>e>>d;

    if(c=='+' && (a+b)==d) cout<<"Yes"<<endl;
    else if(c=='+' && (a+b)!=d) cout<<a+b<<endl;
    
    else if(c=='-' && (a-b)==d) cout<<"Yes"<<endl;
    else if(c=='-' && (a-b)!=d) cout<<a-b<<endl;
    
    else if(c=='*' && (a*b)==d) cout<<"Yes"<<endl;
    else if(c=='*' && (a*b)!=d) cout<<a*b<<endl;
    

    return 0;
}