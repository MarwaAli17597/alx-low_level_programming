#include "main.h"
/**
 * reverse_array - reverse the content of array of integers
 * @a: The array of integers to be reverde
 * @n: The numbers of element in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int point, tmp;
for (point = n - 1; point >= n / 2; point--)
{
tmp = a[n - 1 - point];
a[n - 1 - point] = a[point];
a[point] = tmp;
}
}
