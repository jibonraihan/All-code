#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int five=a/5;
    int two=(a%5)/2;
    int one=a-(five*5+two*2);
    printf("5 Taka notes = %d\n2 Taka notes = %d\n1 Taka notes = %d", five, two,one);

    return 0;
}