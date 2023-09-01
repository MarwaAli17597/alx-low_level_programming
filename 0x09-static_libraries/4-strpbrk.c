#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: The string
 * @accept: The set of byets to be searched
 * Return: pointer to first occurnce
 */
char *_strpbrk(char *s, char *accept)
{
int x;
while (*s)
{
for (x = 0; accept[x]; x++)
{
if (*s == accept[x])
return (s);
}
s++;
}
return ('\0');
}
