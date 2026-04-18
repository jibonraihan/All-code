#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d\n", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d\n", &a);
        if(a>51)
        {
            int x= a-51;
            printf("%d\n", x*x);
        }
        else if(a<51)
        {
            printf("%d\n", 51-a);
        }
        else printf("0");
    }
    return 0;
}