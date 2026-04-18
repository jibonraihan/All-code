#include<stdio.h>

int main()
{
    int n,m;
    char c;
    scanf("%d %c %d", &n, &c, &m);

    if(n>m)
    {
        if(c=='>')
        {
            printf("True");
        }
        else
            {
            printf("False");
        }
    }

    else if(n<m)
    {
        if(c=='<')
        {
            printf("True");
        }
        else
            {
            printf("False");
        }
    }
    else{
        if(c=='=')
        {
            printf("True");
        }
        else
            {
            printf("False");
        }
    }
}
