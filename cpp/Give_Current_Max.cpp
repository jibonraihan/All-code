#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string student_name;
    int student_roll;
    int student_mark;
    Student(string name, int roll, int mark)
    {
        this->student_name = name;
        this->student_roll = roll;
        this->student_mark = mark;
    }
};
class Compare
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.student_mark < r.student_mark)
            return true;
        else if (l.student_mark > r.student_mark)
            return false;
        else
        {
            if (l.student_roll > r.student_roll)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    priority_queue<Student, vector<Student>, Compare> C;
    int T;
    cin >> T;
    while (T--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student object(name, roll, marks);
        C.push(object);
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            if (C.empty()) cout << "Empty" << endl;
            else cout << C.top().student_name << " " << C.top().student_roll << " " << C.top().student_mark << endl;
        }
        else if (a == 2)
        {
            if (!C.empty()) C.pop();
            if (C.empty()) cout << "Empty" << endl;
            else cout << C.top().student_name << " " << C.top().student_roll << " " << C.top().student_mark << endl;
        }
        else
        {
            string nm;
            int rl, mrk;
            cin >> nm >> rl >> mrk;
            Student Obj(nm, rl, mrk);

            C.push(Obj);
            if (C.empty()) cout << "Empty" << endl;
            else cout << C.top().student_name << " " << C.top().student_roll << " " << C.top().student_mark << endl;
        }
    }

    return 0;
}