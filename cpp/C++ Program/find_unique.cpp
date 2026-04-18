#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++) cin>>ar[i];

    int ar2[100], k=0;
    for(int i=0; i<n; i++)
    {
        int flag =1;
        for(int j=0; j<n; j++)
        {
            if(i!=j && ar[i]==ar[j])
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
        {
            ar2[k]=ar[i];
            k++;
        }
    }

    for(int i=0; i<k; i++) cout<<ar2[i]<<" ";

    return 0;
}