#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
int hgt, base;
if (size > 0)
{
for (hgt = 1; hgt <= size; hgt++)
{
for (base = size - hgt; base > 0; base--)
_putchar(' ');
for (base = 0; base < hgt; base++)
_putchar('#');
if (hgt == size)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
