#include <stdio.h>
int calculate_power(int base,int exp){
    int result = 1;
    for(int i=0;i < exp;i++){
        result=result*base;
    }
    return result;
}
void print_countdown(int n) {
    while (n > 0) {
        printf("%d\n", n);
        n--;
    }
    printf("Go!\n");
}
int main(){
   int n= calculate_power(4,4);
    printf("the result is %d \n",n);
    int nums = 5;
    printf("Starting countdown:\n");
    print_countdown(nums);
    return 0;
}