#include<stdio.h>

int main()
{
    int a1,a2,a3,a4,a5;
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
    if(a1<=a2 && a2<=a3 && a3<=a4 && a4<=a5)
    {
        printf("Yes");
    }
    else if (a1 >= a2 && a2 >= a3 && a3 >= a4 && a4 >= a5)
    {
        printf("Yes");
    }
    else {
        printf("No");
    }
        return 0;
}