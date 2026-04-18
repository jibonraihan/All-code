#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
     string a; 
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == "Icosahedron")
            sum = sum + 20;
        else if (a == "Cube")
            sum = sum + 6;
        else if (a == "Tetrahedron")
            sum = sum + 4;
        else if (a == "Dodecahedron")
            sum = sum + 12;
        else if (a == "Octahedron")
            sum = sum + 8;
    }
    cout<<sum<<endl;
    return 0;
}