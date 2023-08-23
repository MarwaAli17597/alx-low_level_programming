#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: This is destnation string
 * @src: This is source string
 * @n: The number of byte to copied from src
 * Return: A pointer to the result string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int point = 0, src_line = 0;
while (src[point++])
src_line++;
for (point = 0; point < src[point] && n; point++)
dest[point] = src[point];
for (point = src_line; point < n; point++)
dest[point] = '\0';
return (dest);
}
