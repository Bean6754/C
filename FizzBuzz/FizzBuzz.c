#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  // int i = 1 is not needed as the for loop will set i as 1 initially.

  for( i = 1; i < 101; i = i + 1 )
  {
    //printf("Value of i: %d\n", i);
    if( i % 3 == 0 && i % 5 == 0 )
    {
      printf("FizzBuzz.\n");
    }
    else if( i % 3 == 0 )
    {
      printf("Fizz.\n");
    }
    else if( i % 5 == 0 )
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
