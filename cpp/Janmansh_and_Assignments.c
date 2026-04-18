#include<stdio.h>

int main()
{
    int a, x;
    scanf("%d", &a);
    while(a--){
        scanf("%d\n", &x);
        if(x<8){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}