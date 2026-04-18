#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n; 

    string nm[100];
    string cls[100];
    string sec[100];
    string id[100];

    for (int i = 0; i < n; i++)
    {
        cin >> nm[i] >> cls[i] >> sec[i] >> id[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        swap(sec[i], sec[n - 1 - i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << nm[i] << " " << cls[i] << " " << sec[i] << " " << id[i] << endl;
    }

    return 0;
}