#include <stdio.h>

int main()
{
    int start, end, prime;
    scanf("%d %d", &start, &end);
    for (int i = start; i <=end; i++)
    {
        prime = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
        }
        if(prime&&i>1) printf("%d ",i);
    }
    return 0;
}