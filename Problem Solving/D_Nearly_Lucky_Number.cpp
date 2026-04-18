#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n, s;
    cin >> n;
    int count = 0;
    for (char c : n)
        count += (c == '4' || c == '7');
    s = to_string(count);
    bool lucky = true;
    for (char c : s)
        lucky &= (c == '4' || c == '7');
    cout << (lucky ? "YES" : "NO") << endl;
    return 0;
}