#include <stdio.h>

int main() {
    char str[] = "Embedded";
    char *ptr = str;
    int length = 0;    
    while (*ptr != '\0') {
        length++;  
        ptr++;     
    }

    printf("The length of '%s' is: %d\n", str, length);

    return 0;
}