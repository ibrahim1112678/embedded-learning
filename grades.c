# include <stdio.h>
int main(){
    int grades[5]={80,55,40,30,90};
    int i;
    int sum=0;
    int success=0;
    int max=grades[0];
    int n=0;
    for (i = 0;i < 5;i++) {
        sum+=grades[i];
        if (grades[i]>50){
            n=n+1;
        }

        
            if(grades[i]>max){
                max=grades[i];
        }
    }
    
    printf("the grades sum is: %d\n",sum);
    printf("the total of success student is: %d\n",n);
    printf("the grade max is: %d\n",max);
    
    return 0;}