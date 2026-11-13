#include <stdio.h>
void analyze_array(int *arr, int size, int *sum, int *max) {
    *sum = 0;        
    *max = arr[0];   
    int i;
    for (i = 0; i < size; i++) {
        *sum=*sum+arr[i];
         if (arr[i] > *max) {
            *max = arr[i];
    }
}
}

int main() {
    int nums[4] = {5, 12, 8, 20};
    int total, maximum;
    
    // 4. استدعِ الدالة هنا (لا تنسَ &total و &maximum)
    analyze_array(nums, 4, &total, &maximum);
    
    printf("Total Sum: %d\n", total);
    printf("Maximum: %d\n", maximum);
    
    return 0;
}