#include <bits/stdc++.h>
using namespace std;

int main()
{
   string ar;
   cin>>ar;

    int xr[26] = {0};

    for (int i = 0; i < ar.length(); i++)
    {
        int id = ar[i]- 'a';
        xr[id]++;      
    }

    for (int i = 0; i < 26; i++)
    {
        if(xr[i] > 0)
        {
            char ch = i + 'a';
            cout << ch << " : " << xr[i] << endl;
        }    
    }

    return 0;
}