#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm, sec;
    int cls, id, math_m, eng_m, total_m;

    void Total()
    {
        total_m = math_m + eng_m;
    }

    void display()
    {
        cout << nm << " " << cls << " " << sec << " " << id << " " << math_m << " " << eng_m << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    Student st[100]; 

    for (int i = 0; i < n; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].sec >> st[i].id >> st[i].math_m >> st[i].eng_m;
        st[i].Total();
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (st[j].total_m < st[j + 1].total_m ||
                (st[j].total_m == st[j + 1].total_m && st[j].id > st[j + 1].id))
            {
                swap(st[j], st[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        st[i].display();
    }

    return 0;
}