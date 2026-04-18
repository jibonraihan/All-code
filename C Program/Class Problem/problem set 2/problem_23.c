#include<stdio.h>

int main()
{
    int a1, a2, a3;
    scanf("%d%d%d", &a1, &a2, &a3);

    if (a1 + a2 + a3 == 0 || a1 + a2 + a3 == 3)
    {
        printf("Tie");
    }
    else 
    {
        if ((a1 + a2 + a3 == 2))
        {
            if(a1==0){
                printf("A");
            }
            else if(a2==0){
                printf("B");
            }
            else {
                printf("C");
            }
        }
        if ((a1 + a2 + a3 == 1))
        {
            if (a1 == 1)
            {
                printf("A");
            }
            else if (a2 == 1)
            {
                printf("B");
            }
            else
            {
                printf("C");
            }
        }
    }
        return 0;
}