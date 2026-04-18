#include <bits/stdc++.h>
using namespace std;

void fun(string s)
{
    int one = 0, zero = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            zero++;
        else
            one++;
    }
    if (zero == one)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        queue<string> qe;
        string s;
        cin >> s;
        qe.push(s);
        fun(qe.front());
    }

    return 0;
}