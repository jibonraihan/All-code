#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin>>s1>>s2;

    int a1=s1.size(), a2=s2.size();
    cout<<a1<<" "<<a2<<endl;

    cout<<s1+s2<<endl;

    char temp=s1[0];
    s1[0]=s2[0];
    s2[0]=temp;

    cout<<s1<<" "<<s2<<endl;


    return 0;
}