#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    if (N != M)
    {
        cout << "NO" << endl;
        return 0;
    }

    stack<int> stack;
    queue<int> qe;
    for (int i = 0; i < N; i++)
    {
        int value;
        cin >> value;
        stack.push(value);
    }
    for (int i = 0; i < M; i++)
    {
        int val;
        cin >> val;
        qe.push(val);
    }

    int flag = 1;
    while (!stack.empty() && !qe.empty())
    {
        if (stack.top() != qe.front())
        {
            flag = 0;
            break;
        }
        stack.pop();
        qe.pop();
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}