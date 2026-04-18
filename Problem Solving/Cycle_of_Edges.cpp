#include <bits/stdc++.h>
using namespace std;

int P[100005];
int ste_size[100005];

int find(int ab)
{
    if (ab == P[ab])
    return ab;
    return P[ab] = find(P[ab]);
}
void making_set(int v)
{
    P[v] = v;
    ste_size[v] = 1;
}

bool union_set(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a == b)
        return false;
    if (ste_size[a] < ste_size[b])
        swap(a, b);
    P[b] = a;
    ste_size[a] += ste_size[b];
    return true;
}

int main()
{
    int N, E;
    cin >> N >> E;

    for (int i = 1; i <= N; i++)
        making_set(i);

    int cycle = 0;
    for (int i = 0; i < E; i++)
    {
        int A, B;
        cin >> A >> B;

        if (!union_set(A, B))
            cycle++;
    }

    cout << cycle << "\n";

    return 0;
}