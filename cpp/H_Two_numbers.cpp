#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    float f=1.0*a/b;

    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(f)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(f)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(f)<<endl;
    return 0;
}