#include<stdio.h>

int main()
{
    char ar[102];
    scanf("%s", ar);

    int odd=0, evn=0, lnth=strlen(ar);
    for(int i=0; i<lnth; i++)
    {
        int d=ar[lnth-1-i]-'0';
        if(i%2==0) odd=odd+d;
        else evn=evn+d;
    }

    int dif=0;
    if(odd>=evn) dif=odd-evn;
    else dif=evn-odd;

    if(dif%11==0) printf("YES\n");
    else printf("NO\n");

    return 0;
}