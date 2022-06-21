#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  int input;
  // int i = 1 is not needed as the for loop will set i as 1 initially.

  printf("How many do you want to count? ");
  scanf("%d", &input);

  for (i = 1; i < (input + 1); i = i + 1)
  {
    //printf("Value of i: %d\n", i);

    if (i % 3 == 0 && i % 5 == 0)
    {
      printf("FizzBuzz.\n");
    }
    else if (i % 3 == 0)
    {
      printf("Fizz.\n");
    }
    else if (i % 5 == 0)
    {
      printf("Buzz.\n");
    }
    else
    {
      printf("%d\n", i);
    }
  }

  return 0;
}

