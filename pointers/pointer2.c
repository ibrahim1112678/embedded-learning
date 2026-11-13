# include <stdio.h>
int main() {
    int n=20;
    int *p = &n;
    printf("the value of n %d \n",n);
    *p = 30;
    printf("the value of n %d \n",n);
    return 0;
}