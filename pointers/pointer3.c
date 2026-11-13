# include <stdio.h>
int main() {
    int nums[4]= {1,2,3,4};
    int *pnums= nums;
    int i;
    int sum =0;
    for (i=0;i<4;i++) {
        sum= sum + *(pnums+i);
    }
    printf ("the sum of array is %d",sum);
    return 0;
}