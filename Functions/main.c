#include <stdio.h>
#include <stdlib.h>

// Int function.
int function1() {
  printf("Function 1 executed.\n");
}
// Void function.
void function2() {
  printf("Function 2 executed.\n");
}

// Main funciton (has to be executed).
int main() {
  char userinput[56];
  
  printf("The functions availible are\n");
  printf("function1 (int function) and\n");
  printf("function2 (void function).\n");
  scanf("%s", userinput);
  
  if (userinput == "function1") {
    function1();
  }
  else if (userinput == "function2") {
    function2();
  }
  else {
    printf("Error! Please try again.\n");
    return 0;
  }
  return 0;
}
