// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     char ar[20];
//     for(char i=0; i<20; i++)
//     {
//         cin>> ar[i];
//     }

//     for (char i = 0; i < 20; i++)
//     {
//         cout << ar[i];
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     char ar[20];
//     cin.getline(ar, 20); // Reads up to 19 characters + null terminator
//     cout << ar;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Ignore the leftover newline

    cout << "Enter your full name: ";
    getline(cin, name); // Now it works correctly

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    return 0;
}
