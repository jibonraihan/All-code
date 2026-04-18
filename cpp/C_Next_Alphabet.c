#include<stdio.h>

int main()
{
    char x;
    scanf("%c", &x);

    char ch='a';
    if(x=='z')
    {
        x=ch-1;
    }
    printf("%c", x+1);

    return 0;
}