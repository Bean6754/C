// Author: Matthew Dean.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // User input.
    int input;
    printf("What int size do you want? ");
    scanf("%d", &input);
    
    // Generate random number.
    srand(time(NULL)); // Only call once.
    float r = rand() % input;
    
    printf("%f", r);
    return 0;
}
