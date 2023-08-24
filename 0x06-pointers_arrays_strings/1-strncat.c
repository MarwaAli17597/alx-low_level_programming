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
int point, dest_line = 0;
while (dest[point] != '\0')
point++;
while (dest_line < n && src[point] != '\0')
{
dest[dest_line] = src[point];
point++;
dest_line++;
dest[point] = '\0';
return (dest);
}
}
