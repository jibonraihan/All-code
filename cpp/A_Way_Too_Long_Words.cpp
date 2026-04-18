#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cin >> x;
    string str;
    while (cin >> str)
    {
        if (str.length() <= 10)
        {
            cout << str<<endl;
        }
        else
        {
            cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
        }
    }

    return 0;
}