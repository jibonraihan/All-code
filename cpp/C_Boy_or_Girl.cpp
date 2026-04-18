#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int count = 0;
    for (int i = 0; i < a.length(); i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            count++;
        }
    }
    if (count % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}