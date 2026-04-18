#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin>>s1>>s2;
        string rslt = "";
        int sl = s1.length();
        int xl = s2.length();

        for (int i = 0; i < sl;)
        {
            bool found = true;
            if (i + xl <= sl)
            {
                for (int j = 0; j < xl; ++j)
                {
                    if (s1[i + j] != s2[j])
                    {
                        found = false;
                        break;
                    }
                }
            }
            else
            {
                found = false;
            }

            if (found)
            {
                rslt += "#";
                i += xl;
            }
            else
            {
                rslt += s1[i];
                i++; 
            }
        }

        cout << rslt << endl;
    }

    return 0;
}
