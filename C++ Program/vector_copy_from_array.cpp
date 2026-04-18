#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n;
    //int ar[n];
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];


    //cin>>m;
    //vector<int> v(ar, ar+m);

    //sort(v.begin(), v.end());//ascending sort
    //sort(v.begin(), v.end(), greater<int>());//descending sort

    //v.erase(v.begin(), v.end()-3);
    //replace(v.begin(), v.end(), 3,100);
    //v.emplace_back(99);
    //find(v.begin(), v.end(),3);
    //reverse(v.begin(), v.end());
    replace_if(v.begin(), v.end(), [](int x){return x>0;},1);
    replace_if(v.begin(), v.end(), [](int x){return x<0;},2);
    
    for(int x=0; x<v.size(); x++)
    cout<<v[x]<<" ";

    return 0;
}