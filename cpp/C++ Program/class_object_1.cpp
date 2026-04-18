#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int student_roll;
    char sec;
    double gpa;

    Student(int r, char c, double g, string n)
    {
        student_roll = r;
        sec = c;
        gpa = g;
        nm = n;
    }
};

int main()
{
    for (int i = 0; i < 4; i++)
    {
        int r;
        char c;
        double g;
        string s;
        cin >> s >> r >> c >> g;
        Student a(r, c, g, s);
        cout << a.nm << " " << a.student_roll << " " << a.sec << " " << a.gpa << endl;
    }
    // cin.getline(a.name, 100);
    // cin.ignore();
    // cin.getline(b.name, 100);
    // cin >> b.roll >> b.section >> b.gpa;
    // cout << b.gpa << " " << b.roll << " " << b.section << " " << b.name;

    return 0;
}