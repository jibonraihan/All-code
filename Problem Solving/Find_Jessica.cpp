#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, word;
    getline(cin, s);
    stringstream ss(s); 

    bool found = false;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
