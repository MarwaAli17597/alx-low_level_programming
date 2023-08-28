#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: The prefix
 *
 * Return: number of byets
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int x;
int y;
{
for (x = 0; s[x] != '\0'; x++)
{
if (*s == accept[y])
{
x++;
break;
}
else if (accept[y + 1] == '\0')
return (x);
}
s++;
}
return (x);
}
