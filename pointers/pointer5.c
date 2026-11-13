#include <stdio.h>

void multiplyByTwo(int *num) {
    *num = *num * 2; 
}

int main() {
    int val = 10;

    printf("Value before function: %d\n", val);

    multiplyByTwo(&val);

    printf("Value after function: %d\n", val);

    return 0;
}