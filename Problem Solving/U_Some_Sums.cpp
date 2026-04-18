#include <bits/stdc++.h>
using namespace std;

int fun(int a)
{
    int sum=0;
    while(a!=0)
    {
        sum+=a%10;
        a/=10;
    }
    return sum;
}
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int sum=0;

    for(int i=1; i<=n; i++)
    {
        int sm=fun(i);
        if(sm>=a && sm<=b)
        {
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}