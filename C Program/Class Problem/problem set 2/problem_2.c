#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    if(a>=18)
    {
        printf("Congratulation! You are eligible for casting your vote.");
    }
    else {
        printf("Sorry, You would be able to cast your vote after %d year.",18-a);
    }
    return 0;
}