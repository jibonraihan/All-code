#include <bits/stdc++.h>
using namespace std;

int *sort_it(int a)
{
    int* ar = new int[a];
    for(int i=0; i<a; i++) cin>>ar[i];
    sort(ar, ar+a, greater<int>());
    return ar;
}
int main()
{
    int n;
    cin>>n;
    int* a= sort_it(n);
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    return 0;
}