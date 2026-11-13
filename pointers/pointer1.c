#include <stdio.h>
int main () {
    int x=25;
    int *p= &x;
    printf ("the value of x is : %d\n",x);
    printf ("the value of x is : %d",*p);
    return 0;   
}