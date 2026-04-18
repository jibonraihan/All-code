#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    queue<string> qe;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            string name;
            cin >> name;
            qe.push(name);
        }
        else
        {
            if (!qe.empty())
            {
                cout << qe.front() << endl;
                qe.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}