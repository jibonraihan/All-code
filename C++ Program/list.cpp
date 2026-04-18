#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l={10, 20, 30, 40, 50, 60, 20, 6, 12, 20, 20};
    //replace(l.begin(), l.end(), 20, 0);
    // for(auto it=l.begin(); it!=l.end(); it++)
    // {
    //     cout<<&(*it)<<endl;
    // }
    // auto it = find(l.begin(), l.end(), 20);
    // if(it == l.end()) cout<<"Not found"<<endl;
    // else cout<<"Found"<<endl;
    //l.remove(20);
    //l.sort();
    //l.sort(greater<int>());
    //l.unique();
    l.reverse();
    for(int v:l) cout<<v<<endl;
    return 0;
}