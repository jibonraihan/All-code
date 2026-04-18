#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v)
{
    for(auto x: v) cout<<x<<" ";
}
int main()
{
    vector<int> v1 = {3, 5, 7, 9, 0, 1, 2, 3};

    vector<int> v2 = {4, 57, 90, 12, 45};
    v1.insert(v1.begin()+1, {1,2,3});
    print_vector(v1);
    cout<<endl;
    print_vector(v2);

    return 0;
}