#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Check if it's really a 5-digit number
    if (num < 10000 || num > 99999) {
        printf("Invalid input! Please enter a 5-digit number.\n");
        return 1;
    }

    // Extract and sum digits
    while (num > 0) {
        int digit = num % 10;  // get last digit
        sum += digit;          // add it to sum
        num /= 10;             // remove last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
