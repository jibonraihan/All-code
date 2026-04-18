#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int found=0;

    for(int i=a; i<=b; i++)
    {
        if(i==4 || i==7 || i==47 || i==744) 
        {
            found=1;
        }
    }
    if(found)
    {
        for (int i = a; i <= b; i++)
        {
            if (i == 4 || i == 7 || i == 47 || i == 744)
            {
                cout<<i<<" ";
            }
        }
    }
    else 
    {
        cout<< -1<<endl;
    }
    return 0;
}