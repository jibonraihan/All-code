#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[5][5];
    int row=-1, col=-1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>s[i][j];
        }
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(s[i][j]=='1')
            {
                row=i;
                col=j;
                break;
            }
        }
        if(row!=-1) break;
    }

    cout<<abs(row-2) + abs(col-2);

    return 0;
}