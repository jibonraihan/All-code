#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int bi, bm;
        string bn;
        char bs;
        for (int i = 0; i < 3; i++)
        {
            int id, mrk;
            string nm;
            char sec;
            cin >> id >> nm >> sec >> mrk;
            if (i == 0)
            {
                bi = id;
                bn = nm;
                bs = sec;
                bm = mrk;
            }
            else
            {
                if (mrk > bm || (mrk == bm && id < bi))
                {
                    bi = id;
                    bn = nm;
                    bs = sec;
                    bm = mrk;
                }
            }
        }
        cout << bi << " " << bn << " " << bs << " " << bm << endl;
    }

    return 0;
}
