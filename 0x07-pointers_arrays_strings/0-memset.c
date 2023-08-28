#include "main.h"
/**
 * _memset - fills memory with constant byte
 * The _memset() function fills the first n bytes of the memory area
 * @s: memory area to be filled
 * @b: charcter be filled
 * @n: number of byte to be filled
 *
 * Return: pointer to filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
s[x] = b;
}

return (s);
}
