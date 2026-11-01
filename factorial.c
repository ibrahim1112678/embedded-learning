#include <stdio.h>
int calculate_factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result; 
}

int main() {
    int num = 5;
    int fact = calculate_factorial(num); 
    
    printf("Factorial of %d is: %d\n", num, fact);
    return 0;
}