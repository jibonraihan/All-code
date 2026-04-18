#include <bits/stdc++.h>
using namespace std;

void palindrome(string bin1)
{
    string rev = bin1;
    reverse(rev.begin(), rev.end());
    if (bin1 == rev)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
void binary(int n)
{
    string bin = "";
    if (n % 2 == 0)
    {
        cout << "NO" << endl;
        return;
    }
    while (n > 0)
    {
        bin = char('0' + (n % 2)) + bin;
        n /= 2;
    }
    palindrome(bin);
}
int main()
{
    int n;
    cin >> n;
    binary(n);
    return 0;
}