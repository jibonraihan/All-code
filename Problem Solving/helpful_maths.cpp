#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c[101];
    cin>>c;
    int sz=strlen(c);

    for(int i=0; i<sz-2; i+=2)
    {
        for(int j=i+2; j<sz; j+=2)
        {
            if(c[i]>c[j])
            {
                int temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }

    cout<<c;

    return 0;
}