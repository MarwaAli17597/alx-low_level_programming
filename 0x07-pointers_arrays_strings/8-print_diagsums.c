#include "main.h"
/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: squre matrix of integers
 * @size: colom & row of matrix
 */
void print_diagsums(int *a, int size)
{
int x, s1 = 0, s2 = 0;
for (x = 0; x < size; x++)
{
s1 += a[x];
a += size;
}
a -= size;
for (x = 0; x < size; x++)
{
s2 += a[x];
a -= size;
}
printf("%d, %d\n", s1, s2);
}
