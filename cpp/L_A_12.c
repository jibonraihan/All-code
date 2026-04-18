#include <stdio.h>

int main()
{
    int n,t,i;
    scanf("%d%d", &n, &t);

    // if(t>10)
    // {
    //     printf("-1");
    //     return 0;
    // }
  
    if (t==10 && n==1)
    {
        printf("-1");
    }
    else
    {
        printf("%d",t);
        for(i=1; i<n; i++)
        {
            printf("0");
        }
        printf("\n");
    }
   
    return 0;
}

