#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;  // Store the value pointed by a in temp
    *a = *b;        // Put the value pointed by b into the location pointed by a
    *b = temp;      // Put the stored value (temp) into the location pointed by b
}

int main() {
    int x = 10;
    int y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}