#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list;
    int num;
    while (1)
    {
        cin >> num;
        if (num == -1)
            break;
        auto it = find(list.begin(), list.end(), num);
        if (it == list.end())
        {
            list.push_back(num);
        }
    }
    list.sort();
    for (int val : list)
    {
        cout << val << " ";
    }

    return 0;
}