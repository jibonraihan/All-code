#include <bits/stdc++.h>
using namespace std;

double fun(vector<double>&v, int n)
{
    double sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=v[i];
    }
    return sum/n;
}
int main()
{
    int n;
    cin>>n;
    vector<double> v(n); 
    for (int i = 0; i < n; i++) cin>>v[i];
    cout<<fixed<<setprecision(7);
    double avg= fun(v,n);
    cout<<avg<<endl;
    return 0;
}