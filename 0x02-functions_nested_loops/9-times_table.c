#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with
*/
void times_table(void)
{
int num, mult, prod;
for (num = 0; num <= 9; num++)
{
_putchar(48);
for (mult = 1; multi <= 9; multi++)
{
_putchar(',');
_putchar(' ');
prod = num * mult;
if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + 48);
_putchar((prod % 10) + 48);
}
_putchar('\n')
}
}
