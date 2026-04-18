#include<stdio.h>

int main()
{
    int a, z, x, n;
   scanf("%d", &a);
   while(a--)
   {
    scanf("%d %d %d", &z, &x, &n);
    float TS=z*x;
  
    float percent=(n/TS)*100;
  
    if(percent>50)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
   } 

    return 0;
}