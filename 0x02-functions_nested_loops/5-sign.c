#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: The number of which the sign will be printed
 * Return: 1 if number is greater than 0 or 0 if equl 0,or -1 if less than 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
