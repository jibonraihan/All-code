#include<stdio.h>

int main()
{
    float a;  
    scanf("%f", &a);
    while(a--)
    {
      float x,y,z;  
      scanf("%f %f %f", &x,&y,&z);
      float avg=(x+y)/2;
      if(avg>z)
      {
        printf("YES\n");
      }
      else{
        printf("NO\n");
      }
      
    }
    return 0;
}