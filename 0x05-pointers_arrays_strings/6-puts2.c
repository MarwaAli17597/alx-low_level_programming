#include "main.h"
/**
 * putc2 - print one char out of two of string
 * @str: The string containing charctors
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; ++i)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
