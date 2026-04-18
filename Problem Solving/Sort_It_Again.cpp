#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string student_name, sec;
    int cls, id, math_m, eng_m;

    void input()
    {
        cin >> student_name >> cls >> sec >> id >> math_m >> eng_m;
    }

    void print()
    {
        cout << student_name << " " << cls << " " << sec << " " << id << " " << math_m << " " << eng_m << endl;
    }
};

bool cmp(Student a, Student b)
{
    if (a.eng_m != b.eng_m)
        return a.eng_m > b.eng_m;
    else if (a.math_m != b.math_m)
        return a.math_m > b.math_m;
    else
        return a.id < b.id;
}

int main()
{
    int n;
    cin >> n;
    Student st[1000];

    for (int i = 0; i < n; i++)
    {
        st[i].input();
    }

    sort(st, st + n, cmp);

    for (int i = 0; i < n; i++)
    {
        st[i].print();
    }

    return 0;
}