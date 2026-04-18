#include <stdio.h>

int main()
{
    int mn;
    printf("Enter a month number: ");
    scanf("%d", &mn);

    switch (mn)
    {
    case 1:
        printf("Month %d (January) has 31 days\n", mn);
        break;
    case 2:
        printf("Month %d (February) has 28 days\n", mn);
        break;
    case 3:
        printf("Month %d (March) has 31 days\n", mn);
        break;
    case 4:
        printf("Month %d (April) has 30 days\n", mn);
        break;
    case 5:
        printf("Month %d (May) has 31 days\n", mn);
        break;
    case 6:
        printf("Month %d (June) has 30 days\n", mn);
        break;
    case 7:
        printf("Month %d (July) has 31 days\n", mn);
        break;
    case 8:
        printf("Month %d (August) has 31 days\n", mn);
        break;
    case 9:
        printf("Month %d (September) has 30 days\n", mn);
        break;
    case 10:
        printf("Month %d (October) has 31 days\n", mn);
        break;
    case 11:
        printf("Month %d (November) has 30 days\n", mn);
        break;
    case 12:
        printf("Month %d (December) has 31 days\n", mn);
        break;

    default:
        printf("Enter a valid month number between 1 to 12");
        break;
    }
    return 0;
}