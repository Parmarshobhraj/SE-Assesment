#include <stdio.h>

void displayMenu();
float getNumber(const char* prompt);
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    int choice;
    float num1, num2, result;
    int i;

    for (i = 1; i <= 4; i++) { 
        
        displayMenu();
        printf("Enter your choice : ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Thank you for using the calculator. Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Please select a valid option.\n");
            continue;
        }

        num1 = getNumber("Enter the first number: ");
        num2 = getNumber("Enter the second number: ");

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("The result of addition: %.2f\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("The result of subtraction: %.2f\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("The result of multiplication: %.2f\n", result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: Division by zero is undefined.\n");
                } else {
                    result = divide(num1, num2);
                    printf("The result of division: %.2f\n", result);
                }
                break;
        }

        printf("Do you want to perform another calculation? (1 for Yes, 0 for No): ");
        int continueCalc;
        scanf("%d", &continueCalc);

        if (continueCalc == 0) {
            printf("Thank you for using the calculator. Goodbye!\n");
            break;
        }
    }

    return 0;
}

void displayMenu() {
    printf("\n--- Menu-Driven Calculator ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("-----------------------------\n");
}

float getNumber(const char* prompt) {
    float num;
    printf("%s", prompt);
    scanf("%f", &num);
    return num;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

