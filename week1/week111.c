#include <stdio.h>

int main() {
    int nums[5];
    int *ptr = nums; // المؤشر يشير لأول عنصر
    int i, sum = 0;
    int smallest, largest;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", ptr + i); // نستخدم المؤشر للإدخال
    }

    smallest = *ptr; // نفس nums[0]
    largest = *ptr;
    sum = *ptr;

    // نبدأ من العنصر الثاني
    for (i = 1; i < 5; i++) {
        sum += *(ptr + i); // نجمع باستخدام المؤشر
        
        if (*(ptr + i) > largest) largest = *(ptr + i);
        if (*(ptr + i) < smallest) smallest = *(ptr + i);
    }

    printf("Sum: %d\nLargest: %d\nSmallest: %d\n", sum, largest, smallest);
    return 0;
}