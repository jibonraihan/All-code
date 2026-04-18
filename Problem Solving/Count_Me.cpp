#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    getchar();
    while (T--)
    {
        string sentence, name1, num, idx;
        getline(cin, sentence);   
        stringstream S1(sentence); 
        stringstream S2(sentence);
        map<string, int> M1, M2;
        int max = 0;
        while (S1 >> name1)
        {
            M1[name1]++;
        }
        for (auto it = M1.begin(); it != M1.end(); it++)
        {
            if (it->second > max) max = it->second;
        }
        while (S2 >> num)
        {
            M2[num]++;
            if (M2[num] == max)
            {
                cout << num << " " << M2[num] << endl;
                break;
            }
        }
    }

    return 0;
}