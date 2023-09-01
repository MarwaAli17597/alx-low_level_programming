#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory area to copy
 * @src: source memory to copy charcter from
 * @n: number of byte to copy
 *
 * Return: @dest buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
dest[x] = src[x];
}
return (dest);
}
