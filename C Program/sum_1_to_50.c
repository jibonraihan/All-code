#include<stdio.h>

int main()
{
    int i=1, even=0, odd=0;
    do
    {
        if(i%2==0) even+=i;
        else odd+=i;
        i++;
    } while (i<=50);
    printf("Even sum: %d\n", even);
    printf("Odd sum: %d", odd);
    
    return 0;
}