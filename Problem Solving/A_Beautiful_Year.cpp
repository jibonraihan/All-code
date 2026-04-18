#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;

    for (int i = 1;; i++)
    {
        year++;
        int x=year;
        int first = 0, second = 0, third = 0, fourth = 0;

        fourth = x % 10;
        x /= 10;
        third = x % 10;
        x /= 10;
        second = x % 10;
        first = x / 10;
        if (!(first == second || first == third || first == fourth || second == third || second == fourth || third == fourth))
        {
            break;
        }
    }

    cout << year << endl;
    return 0;
}