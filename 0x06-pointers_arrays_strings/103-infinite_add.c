#include "main.h"
/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 *
 * Return: 0 if buffer too small to store result, else return pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int l1, l2, tmpl, rl, i, sm, num1, nm2, c;
char tmp[10000];

rl = i = l1 = l2 = s = nm1 = nm2 = c = 0;
while (n1[l1] != '\0')
l1++;
while (n2[l2] != '\0')
l2++;
if (l1 + 2 > size_r || l2 + 2 > size_r)
return (0);
l1--;
l2--;
while (i <= l1 || i <= l2)
{
nm1 = nm2 = 0;
if (i <= l1)
nm1 = n1[l1 - i] - '0';
if (i <= l2 && (l2 - i) >= 0)
nm2 = n2[l2 - i] - '0';
s = nm1 + nm2 + c;
if (s >= 10)
{
c = 1;
s -= 10;
}
else
c = 0;
r[i] = s + '0';
i++;
rl++;
}
if (c > 0)
{
r[i] = c + '0';
r[i + 1] = '\0';
}
i = tmpl = 0;
while (i <= rl)
{
tmp[i] = r[rl - i];
tmpl++;
i++;
}
i = 0;
while (i < tmpl)
{
if (r[i] == '\0')
{
break;
}
r[i] = tmp[i];
i++;
}
return (r);
}
