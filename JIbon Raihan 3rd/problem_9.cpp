#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //int ar[n];
    int feq[10]={0};
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> ar[i];
    //     feq[ar[i]]++;
    // }
    while(n!=0)
    {
        int rem=n%10;
        feq[rem]++;
        n/=10;
    }
    for (int i = 0; i < 10; i++)
    {
        if(feq[i]!=0)
        {
            cout <<i<<":"<< feq[i]<<endl;
        }
        
    }
    return 0;
}