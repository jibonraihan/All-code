#include <bits/stdc++.h>
using namespace std;
bool sorting(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first != b.first)
        return a.first < b.first;
    else
        return a.second > b.second;
}
int main()
{
    int N;
    cin >> N;
    vector<pair<string, int>> V;
    while (N--)
    {
        string name;
        int uni_int;
        cin >> name >> uni_int;
        V.push_back(make_pair(name, uni_int));
    }
    sort(V.begin(), V.end(), sorting);

    int sz=V.size();
    for (int i = 0; i < sz; i++)
    {
        cout << V[i].first << " " << V[i].second << endl;
    }

    return 0;
}