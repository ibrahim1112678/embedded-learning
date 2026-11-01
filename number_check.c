#include <stdio.h>
int main() {
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(n>0){
    printf("n is positive");
    }
    else if(n<0){
    printf("n is negative");
    }
    else{
    printf("n is 0");
}
if(n%2==0){
printf("n is even");}
else {
printf("n is odd");
}
return 0;

}