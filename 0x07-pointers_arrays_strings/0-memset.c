#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: memory area to be filled
 * @b: charcter be filled
 * @n: number of byte to be filled
 *
 * Return: pointer to filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
unsigned char *memory = s;
for (x = 0; x < n; x++)
{
*s++ = b;
}
return (memory);
}
