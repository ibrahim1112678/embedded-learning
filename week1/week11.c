#include <stdio.h>
#include <limits.h> // هذه المكتبة تحتوي على INT_MAX و INT_MIN

int main() {
    int nums[5];
    int i, sum = 0;
    int smallest = INT_MAX; // أكبر رقم ممكن في الكمبيوتر
    int largest = INT_MIN;  // أصغر رقم ممكن في الكمبيوتر

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
        
        if (nums[i] > largest) largest = nums[i];
        if (nums[i] < smallest) smallest = nums[i];
    }

    printf("Sum: %d\nLargest: %d\nSmallest: %d\n", sum, largest, smallest);
    return 0;
}