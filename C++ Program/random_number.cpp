#include <bits/stdc++.h>
using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 9);

    int otp = 0;
    for (int i = 0; i < 6; i++)
    {
        otp = otp * 10 + dist(gen);
    }
    cout<<"OTP: "<<otp<<endl;
    return 0;
}