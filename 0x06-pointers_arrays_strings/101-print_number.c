#include "main.h"
/**
 * print_number - prints an integers chars
 * @n: The integers number
 * Return: 0
 */
void print_number(int n)
{
unsigned int num;
num = n;
if (n < 0)
{
putchar('-');
n = -n;
}
if (n == 0)
putchar('0');
if (n / 10)
{
print_number(n / 10);
putchar(num % 10 + '0');
}
}
