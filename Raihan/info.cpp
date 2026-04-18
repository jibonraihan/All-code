#include <bits/stdc++.h>
using namespace std;

struct Student
{
    long long id;
    string name;
    string mobile;
    string address;
    string blood;
    string fb_link;
    string email;
    string handle;
};

int main()
{
    vector<Student> students(1000); 

    ifstream fin("students.txt");
    if (!fin)
    {
        cout << "Error: Cannot open students.txt files\n";
        return 1;
    }

    string line;
    getline(fin, line);

    while (getline(fin, line))
    {
        if (line.empty())
            continue;

        stringstream ss(line);
        Student s;
        string field;

        getline(ss, field, '\t');
        s.id = stoll(field);
        getline(ss, s.name, '\t');
        getline(ss, s.mobile, '\t');
        getline(ss, s.address, '\t');
        getline(ss, s.blood, '\t');
        getline(ss, s.fb_link, '\t');
        getline(ss, s.email, '\t');
        getline(ss, s.handle, '\t');

        students[s.id] = s;
    }

    fin.close();

    cout << "Enter your ID: ";
    long long n;
    cin >> n;
    if(n>30 && n<202324104031) n=n%100;

    if (n > 30 || n == 3 || n == 7 || n == 12 || n == 15 || n == 25 || n == 26 
        || n == 28 || n == 202324104003 || n == 202324104007 || n == 202324104012 
        || n == 202324104015 || n == 202324104025 || n == 202324104026 || n == 202324104028 
        || n == 03 || n == 07)
    {
        cout << "Student not available\n";
        return 0;
    }

    Student s = students[n];
    cout << "Name         : " << s.name << "\n";
    if (n < 10)
        cout << "ID           : 20232410400" << s.id << "\n";
    else
        cout << "ID           : 2023241040" << s.id << "\n";
    cout << "Mobile Number: " << s.mobile << "\n";
    cout << "Address      : " << s.address << "\n";
    cout << "Blood group  : " << s.blood << "\n";
    cout << "Facebook link: " << s.fb_link << "\n";
    cout << "Email        : " << s.email << "\n";
    cout << "CP handle    : " << s.handle << "\n";

    return 0;
}
