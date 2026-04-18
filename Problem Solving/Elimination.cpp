#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        queue<char> q;

        for (char x : s)
        {
            if (x == '0')
            {
                q.push('0');
            }
            else
            {
                if (!q.empty() && q.front() == '0')
                {

                    q.pop();
                }
                else
                {

                    q.push('1');
                }
            }
        }

        if (q.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}