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
int point, dest_line;
point = 0;
while (dest[point])
point++;
for (dest_line = 0; dest_line < n && src[dest_line] != '\0'; dest_line++)
dest[dest_line + point] = src[point];
dest[dest_line + point] = '\0';
return (dest);
}
