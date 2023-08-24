#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result If r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, a, b = 0, x, y, z = 0;
while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i > j)
b = i;
else
b = j;
if (b + 1 > size_r)
return (0);
r[b] = '\0';
for (a = b - 1; a >= 0; a--)
{
i--;
j--;
if (i >= 0)
x = n1[i] - '0';
else
x = 0;
if (j >= 0)
y = n2[i] - '0';
else
y = 0;
r[a] = (x + y + z) % 10 + '0';
z = (x + y + z) / 10;
}
if (z == 1)
{
r[b + 1] = '\0';
(b + 2 > size_r)
return (0);
 }
while (b-- >= 0)
r[b + 1] = r[b];
r[0] = z + '0';
}
return (r);
}

