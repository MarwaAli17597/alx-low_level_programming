#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 * @s: The string to get the length of
 * Return: the length of string
 */
int _strlen(char *s)
{
int x = 0
while (*s != '\0')
{
x++;
s++;
}
return (x);
}
