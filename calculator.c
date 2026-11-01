#include <stdio.h>
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { 
    if (b == 0) {
        printf("Error: Cannot divide by zero!\n");
        return 0;
    }
    return a / b; 
}

int main() {
    int choice;
    float num1, num2, result;
    while (1) {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Add (+)\n2. Subtract (-)\n3. Multiply (*)\n4. Divide (/)\n5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting calculator. Goodbye!\n");
            break; 
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            if (choice == 1) result = add(num1, num2);
            else if (choice == 2) result = subtract(num1, num2);
            else if (choice == 3) result = multiply(num1, num2);
            else if (choice == 4) result = divide(num1, num2);

            printf("Result: %.2f\n", result);
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}