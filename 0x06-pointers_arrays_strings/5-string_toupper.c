#include "main.h"
/**
 * *string_toupper - changes all lowercase string to uppercase string
 * @str: A string to be changed
 * Return: A poiner to the changed string
 */
char *string_toupper(char *str)
{
int point = 0;
while (str[point])
{
if (str[point] >= 'a' && str[point] <= 'z')
str[point] -= 32;
point++;
}
return (str);
}
