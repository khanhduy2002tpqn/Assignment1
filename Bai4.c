#include <stdio.h>
#include <string.h>

int main() {
    // Declare variables
    char firstName[50];
    char lastName[50];
    int age;
    char gender[10];
    char personalID[11];       
    char employeeNumber[10];  

    // Input employee information from the keyboard
    printf("Enter First Name: ");
    scanf("%s", firstName);

    printf("Enter Last Name: ");
    scanf("%s", lastName);

    // Age validation
    do {
        printf("Enter Age (0-99): ");
        scanf("%d", &age);
    } while (age < 0 || age >= 100);

    // Gender validation
    do {
        printf("Enter Gender (male/female): ");
        scanf("%s", gender);
    } while (strcmp(gender, "male") != 0 && strcmp(gender, "female") != 0);

    // Personal ID validation (length must be 10)
    do {
        printf("Enter Personal ID (10 digits): ");
        scanf("%s", personalID);
    } while (strlen(personalID) != 10);

    // Unique Employee Number validation (length must be 9)
    do {
        printf("Enter Unique Employee Number (9 digits): ");
        scanf("%s", employeeNumber);
    } while (strlen(employeeNumber) != 9);

    // Print the employee information
    printf("\nEmployee Record:\n");
    printf("First Name: %s\n", firstName);
    printf("Last Name: %s\n", lastName);
    printf("Age: %d\n", age);
    printf("Gender: %s\n", gender);
    printf("Personal ID: %s\n", personalID);
    printf("Unique Employee Number: %s\n", employeeNumber);

    return 0;
}
