#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[101], s2[101];
    cin>>s1>>s2;

    for (int i = 0; i<strlen(s1); i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]=tolower(s1[i]);
        }
    }

    for (int i = 0; i < strlen(s1); i++)
    {
        if (s2[i] >= 'A' && s2[i] <='Z')
        {
            s2[i] = tolower(s2[i]);
        }
    }
    int a=strcmp(s1, s2);
    cout<<a;

        return 0;
}