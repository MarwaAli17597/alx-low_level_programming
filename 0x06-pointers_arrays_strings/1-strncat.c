#include "main.h"
/**
 * _strncat - concatenates two strings contain n or more bytes
 * @dest: This is destnation string
 * @src: This is source string
 * @n: number of bytes form @src to @dest
 * Return: A pointer to destnation string
 */
char *_strncat(char *dest, char *src, int n)
{
int point = 0, dest_line = 0;
while (dest[point++])
dest_line;
for (point = 0; src[point] && point < n; point++)
dest[dest_line++] = src[ponit];
return (dest);
}
