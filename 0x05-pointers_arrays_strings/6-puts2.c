#include "main.h"
/**
 * puts2 - print one char out of two of string
 * @str: The string containing charctors
 * Return: void
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
