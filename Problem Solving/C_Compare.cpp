#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[21], s2[21];
    cin>>s1>>s2;
    int a = strcmp(s1, s2);

    if(a==-1) cout<<s1<<endl;
    else if(a==1) cout<<s2<<endl;
    else cout<<s1<<endl;


    return 0;
}