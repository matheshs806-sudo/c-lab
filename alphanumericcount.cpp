#include <stdio.h>
#include <ctype.h>   // For isdigit(), isalpha(), isspace()

int main() {
    char str[1000];
    int digitCount = 0, specialCharCount = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read line including spaces

    while (str[i] != '\0') {
        if (isdigit((unsigned char)str[i])) {
            digitCount++;
        }
        else if (!isalpha((unsigned char)str[i]) && 
                 !isdigit((unsigned char)str[i]) && 
                 !isspace((unsigned char)str[i])) {
            // Not a letter, not a digit, not a space ? special character
            specialCharCount++;
        }
        i++;
    }

    printf("\nDigit count: %d\n", digitCount);
    printf("Special character count: %d\n", specialCharCount);

    return 0;
}
