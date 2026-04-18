#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    int row2,col2;
    cin >> row >> col;
    cin>>row2>>col2;
    int ar[row][col];
    int a[row2][col2];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> ar[i][j];
        }
    }

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> a[i][j];
        }
    }
    //int res[row][col2]={0};
    int res[row][col2];
    memset(res, 0, sizeof(res));
    if(col!=row2)
    {
        cout<<"Not possible";
        return 0;
    }
    else{
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col2; j++)
            {
                for(int k=0; k<col; k++)
                    res[i][j]+=ar[i][k]*a[k][j];
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
