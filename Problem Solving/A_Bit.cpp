#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    string a;
    string b="++X", c="X++";
    string d="--X", e="X--";
    int count=0;
    while(cin>>a)
    {
        if(a==b || a==c)
        {
            count++;
        }
        if(a==d || a==e)
        {
            count--;
        }
    }
    cout<<count;
    return 0;
}