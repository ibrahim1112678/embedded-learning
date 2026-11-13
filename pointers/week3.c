#include <stdio.h>
int main(){
    int n = 100;
    int *p = &n;
    printf("the value of x is : %d \n",*p);
    *p=50;
    printf("the value of x is : %d \n",*p);
    return 0;
}