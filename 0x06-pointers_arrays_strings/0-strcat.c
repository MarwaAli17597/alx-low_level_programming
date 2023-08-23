#include "main.h"
/**
 * _strcat - concatenates two strings including termniting null byte
 * @dest: This is destination string
 * @src: This is source string
 * Return: A pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
int point = 0, dest_line = 0;
while (dest[point++])
dest_line++;
for (point = 0; src[point]; point++)
dest[dest_line] = src[point];
return (dest);
}
