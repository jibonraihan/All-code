#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[501], b[501];
    cin >> a >> b;

    int len1 = strlen(a), len2 = strlen(b);

    int min = len1;
    if (len2 < len1)
    {
        min = len2;
    }
    int flag = 0;
    for (int i = 0; i < min; i++)
    {
        if (a[i] > b[i])
        {
            flag = 1;
            break;
        }
        else if (a[i] < b[i])
        {
            flag = 2;
            break;
        }
    }
    if (flag == 0)
    {
        if (len1 > len2)
        {
            flag = 1;
        }
        else if (len2 > len1)
        {
            flag = 2;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "a is bigger than b" << endl;
    }
    else if (flag == 2)
    {
        cout << "a is less than b" << endl;
    }
    else
    {
        cout << "a and b are equal" << endl;
    }

    return 0;
}