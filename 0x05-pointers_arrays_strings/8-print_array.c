#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an inputted number of elements of an array of integers
 * @n: elements parmeters input
 * @a: The array of intgers
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != (n - 1))
printf("%d, ", a[i]);
else
printf("%d", a[i]);
}
printf("\n");
}
