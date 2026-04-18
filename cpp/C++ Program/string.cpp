#include <bits/stdc++.h>
using namespace std;

int main()
{
    //string s = "My name is Jibon Raihan";
    // for(auto it = s.begin(); it<s.end(); it++)
    // {
    //     cout<<*it;
    // }

    // stringstream ss (s);
    // string word;
    // while(ss>>word)
    // {
    //     cout<<word<<endl;
    // }
    // int x;
    // cin>>x;
    // char g;
    // cin>>g;
    // string s(x, g);
    // cout<<s<<endl;
    string s;
    cin>>s;
    //cout<<s<<endl;
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    return 0;
}