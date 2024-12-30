// 1. Plan the Criteria
// Define the conditions for evaluating password strength:

// Length (>=8 for medium, >=12 for strong).
// Contains at least one uppercase letter.
// Contains at least one lowercase letter.
// Contains at least one digit.
// Contains at least one special character.
// 2. Input Handling
// Ask the user to input a password.

// 3. Character Checks
// Loop through the password to check for:

// Uppercase letters (A-Z).
// Lowercase letters (a-z).
// Digits (0-9).
// Special characters (e.g., !@#$%^&*()).
// 4. Strength Evaluation
// Use the criteria to determine if the password is:

// Weak
// Medium
// Strong
// 5. Suggestions
// If the password is weak, suggest improvements:

// Add missing character types.
// Increase the length.
// 6. Display Results
// Output the strength and any suggestions.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MIN_LENGTH 8
#define STRONG_LENGTH 12

void checkPasswordStrength(char password[])
{
    int length = strlen(password);
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    // Check each character in the password
    for (int i = 0; i < length; i++)
    {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (islower(password[i]))
            hasLower = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else
            hasSpecial = 1; // Assume any non-alphanumeric is special
    }

    // Determine password strength
    printf("Password: %s\n", password);
    if (length >= STRONG_LENGTH && hasUpper && hasLower && hasDigit && hasSpecial)
    {
        printf("Strength: Strong\n");
    }
    else if (length >= MIN_LENGTH && ((hasUpper + hasLower + hasDigit + hasSpecial) >= 2))
    {
        printf("Strength: Medium\n");
        if (!hasUpper)
            printf("- Add uppercase letters\n");
        if (!hasLower)
            printf("- Add lowercase letters\n");
        if (!hasDigit)
            printf("- Add digits\n");
        if (!hasSpecial)
            printf("- Add special characters\n");
    }
    else
    {
        printf("Strength: Weak\n");
        printf("- Make the password at least %d characters long\n", MIN_LENGTH);
        if (!hasUpper)
            printf("- Add uppercase letters\n");
        if (!hasLower)
            printf("- Add lowercase letters\n");
        if (!hasDigit)
            printf("- Add digits\n");
        if (!hasSpecial)
            printf("- Add special characters\n");
    }
}

int main()
{
    char password[100];

    printf("Enter a password to check its strength: ");
    scanf("%99s", password);

    checkPasswordStrength(password);

    return 0;
}
