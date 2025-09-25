#include <stdio.h>

int main() {
    // Equation: x^2 - 5x + 6 = 0
    int x;
    int found = 0;   // use int instead of bool in C

    printf("Finding at least one root of the equation x^2 - 5x + 6 = 0\n");

    // Try values of x from -100 to 100
    for (x = -100; x <= 100; x++) {
        int result = x * x - 5 * x + 6;

        if (result == 0) {
            printf("One root found: x = %d\n", x);
            found = 1;
            break;  // stop after finding the first root
        }
    }

    if (!found) {
        printf("No integer root found in the range.\n");
    }

    return 0;
}
