#include <stdio.h>
int main() {
    int nums[5];
    int sum=0;
    int i,smallest,largest;
    printf("enter 5 numbers \n");
    for(i=0;i<5;i++) {
        scanf ("%d",&nums[i]);
         sum=sum+nums[i];
        if(i==0){
             smallest=nums[0];
             largest=nums[0];
        }
           else{
            if(nums[i]>largest){
            largest=nums[i];
        }
            if(nums[i]<smallest){
            smallest=nums[i];    
        }
    }
       
    }
    printf("the sum of array is %d \n",sum);
    printf("the lrgest array item is %d \n", largest);
    printf("the smallest array item is %d \n", smallest);
    return 0;
}