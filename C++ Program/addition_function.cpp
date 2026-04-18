#include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{
   int sum = a + b;
   return sum;
}
int main()
{
   int n, m;
   cout << "Enter two number: ";
   cin >> n >> m;
   int sum1 = add(n, m);
   cout << sum1<<endl;

   int q, w;
   cout << "Enter two number: ";
   cin >> q >> w;
   int sum2 = add(q, w);
   cout << sum2<<endl;

   int e, r;
   cout << "Enter two number: ";
   cin >> e >> r;
   int sum3 = add(e, r);
   cout << sum3;
   return 0;
}