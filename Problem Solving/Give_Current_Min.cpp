#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    getchar();
    priority_queue<int, vector<int>, greater<int>> V;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        V.push(a);
    }
    int A;
    cin >> A;
    while (A--)
    {
        int b;
        cin >> b;
        if (b == 1)
        {
            if (V.empty())
                cout << "Empty" << endl;
            else
                cout << V.top() << endl;
        }
        else if (b == 2)
        {
            if (!V.empty()) V.pop();
            if (V.empty()) cout << "Empty" << endl;
            else cout << V.top() << endl;
        }
        else
        {
            int c;
            cin >> c;
            V.push(c);
            if (V.empty()) cout << "Empty" << endl;
            else cout << V.top() << endl;
        }
    }

    return 0;
}