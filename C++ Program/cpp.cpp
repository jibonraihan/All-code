#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        int n, sum;
        cin >> n >> sum;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if(n==1)
        {
            if(n==sum) flag=1;
        }

        if(n==2 && flag==0)
        {
            for(int i=0; i<1; i++)
            {
                if(a[i]+a[i+1]==sum) flag=1;
            }
        }

        if(n>2 && flag==0)
        {
            for (int i = 0; i < n - 2; i++)
            {
                for (int j = i + 1; j < n - 1; j++)
                {
                    for (int k = i + 2; k < n; k++)
                    {
                        if ((a[i] + a[j] + a[k]) == sum)
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}