#include <bits/stdc++.h>
using namespace std;

void max_min(int n)
{
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    auto ma = max_element(A.begin(), A.end());
    auto mi = min_element(A.begin(), A.end());
    cout << *mi << " " << *ma << endl;
}
int main()
{
    int n;
    cin >> n;
    max_min(n);

    return 0;
}