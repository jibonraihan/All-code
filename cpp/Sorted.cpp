#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, A;
        set<int> s;
        cin >> N;
        while(N--)
        {
            cin >> A;
            s.insert(A);
        }
        for (auto it = s.begin(); it != s.end(); it++) cout << *it << " ";
        cout << endl;
    }

    return 0;
}