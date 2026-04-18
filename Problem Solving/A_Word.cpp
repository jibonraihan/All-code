#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c[101];
    cin>>c;

    int low=0, up=0;

    for(int i=0; i<strlen(c); i++)
    {
        if(c[i]>='a' && c[i]<='z') low++;

        else if(c[i]>='A' && c[i]<='Z') up++;
    }

    if(up>low)
    {
        for(int i=0; i<strlen(c); i++)
        {
             c[i] = toupper(c[i]);
        }
        cout<<c;
    }

    else {

        for (int i = 0; i < strlen(c); i++)
        {
            c[i] = tolower(c[i]);
        }
        cout << c;
    }


    return 0;
}