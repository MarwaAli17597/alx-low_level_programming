#include <stdio.h>
#include "main.h"
/**
 * print_number - prints an integers chars
 * @n: The integers number
 * Return: 0
 */
void print_number(int n)
{
unsigned int num;
n = num;
if (n < 0)
{
putchar('-');
num = -n;
}
if ((num / 10) != 0)
{
print_number(num / 10);
}
putchar((num % 10) + '0');
}
