#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 * @str: The string to get the length of
 * Return: the length of string
 */
int _strlen(char *str);
{
int counter;
for (counter = 0; *str != '\0'; str++)
counter++;
return (counter);
}
