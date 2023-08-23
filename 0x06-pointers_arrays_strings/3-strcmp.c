#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: The first string to compared
 * @s2: The second string to compared
 * Return: The difference of str1 & str2
 */
int _strcmp(char *s1, char *s2)
{
int point = 0;
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
