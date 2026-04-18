#include<stdio.h>

int main()
{
    int n, i, index, attempts = 0;

    // Array এর সাইজ ইনপুট
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Array এর উপাদান ইনপুট
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

        // Array এর সকল উপাদান প্রিন্ট
    printf("\nThe elements of the array are: [");
    for(i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");


    // সর্বাধিক তিনবার চেষ্টা করার সুযোগ
    while(attempts < 3) {
        printf("Which number of element you want to view (1 to %d): ", n);
        scanf("%d", &index);

        // সঠিক ইনডেক্স চেক
        if(index >= 1 && index <= n) {
            printf("The element of %d number is: %d\n", index, arr[index - 1]);
            break; // সঠিক ইনপুট পেলে লুপ থেকে বের হবে
        } else {
            printf("Not Found! Please enter a value between 1 and %d.\n", n);
            attempts++; // চেষ্টা সংখ্যা বাড়াবে
        }
    }

    // তিনবার ভুল হলে প্রোগ্রাম বন্ধ হবে
    if(attempts == 3) {
        printf("Too many invalid attempts! Program terminated.\n");
    }

    return 0;
}