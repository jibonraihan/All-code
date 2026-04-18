#include <bits/stdc++.h>
using namespace std;

void fun(int t)
{
    vector<int> v1(t);
    vector<int> v2(t);
    for(int i=0; i<t; i++)
    {
        cin>>v1[i];
    }
    for (int i = 0; i < t; i++)
    {
        cin >> v2[i];
    }
    for (int i = 0; i < t; i++)
    {
        cout<< v2[i]<<" ";
    }
    for (int i = 0; i < t; i++)
    {
        cout << v1[i] << " ";
    }
}

int main()
{
    int t;
    cin>>t;
    fun(t);    
    return 0;
}