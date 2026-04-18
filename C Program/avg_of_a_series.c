#include<stdio.h>

int main()
{
    int n, count=0;
    float sum = 0;
    char c;
    do
    {
        scanf("%d", &n);
        sum+=n;
        count++;
        printf("continue? Y or N\n");
        scanf("%s", &c);
    } while (c=='Y');
    printf("%f", sum/count);
    
    return 0;
}