#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int x=2;
        for(int j=1; j<=i; j++)
        {
            while(1)
            {
                int flag=1;
                for(int k=2; k<x; k++)
                {
                    if(k%x==0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    cout<<x<<" ";
                    x++;
                    break;
                }
                x++;
            }
        }
        cout<<endl;
    }
    return 0;
}