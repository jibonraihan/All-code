#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int D = 0, A = 0;
    char c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        if (c[i] == 'A')
            A++;
        else
            D++;
    }

    if (D > A)
        cout << "Danik" << endl;
    else if (A > D)
        cout << "Anton" << endl;
    else
        cout << "Friendship";
    return 0;
}