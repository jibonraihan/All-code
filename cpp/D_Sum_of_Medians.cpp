#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a=n*k;
        int ar[a];
        for(int i=0; i<a; i++)
        {
            cin>>ar[i];
        }
        int m=k;
        int sum=0;
        int count=1;
        int i=0;
        while(m--)
        {
            int ar2[n];
            while(i<n*count)
            {
                ar2[i]=ar[i];
                i++;
            }
            sum+=ar2[(n/2)];
            count++;
        }
        cout<<sum<<endl;
    
    }
    return 0;
}