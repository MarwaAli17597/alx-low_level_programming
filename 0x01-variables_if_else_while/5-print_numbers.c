#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: print 0-9 using putchar while using int variable
 *
 *Return: Always O (Success)
 */
  int main(void)
  {
    int digit = 0;
    while (digit <= 9)
      {
	printf("%i" , digit);
        digit++;
      }
    printf("\n");
    
    return (0);
  }
