//problem 7 and problem 8 are same as question

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    a > b ? (a > c ? printf("The largest number is: %d", a) : printf("The largest number is: %d", c)) : (b > c ? printf("The largest number is: %d", b) : printf("The largest number is: %d", c));
    return 0;
}