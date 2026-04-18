#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[1001], s2[1001], result[1002];
    cin >> s1;
    cin >> s2;
    int i = strlen(s1)-1 ;
    int j = strlen(s2)-1;
    int k=0, carry=0;

    while(i>=0 || j>=0 || carry)
    {
        int a=0, b=0;
        if(i>=0) a=s1[i--] - '0';
        if(j>=0) b=s2[j--] - '0';

        int sum=a+b+carry;
        result[k++]=(sum%10) + '0';
        carry=sum/10;
    }
    for(int x=0; x<k/2; x++)
    {
        char temp=result[x];
        result[x]=result[k-1-x];
        result[k-1-x]=temp;
    }
    result[k]='\0';
    cout<<result;
    return 0;
}