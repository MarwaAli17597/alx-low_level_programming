#include "main.h"
/**
 * cap_string - capitalizes all word of string
 * @str: The string to be capitalized
 *
 * Return: A pointer to changed string
 */
char *cap_string(char *str)
{
int point = 0;
while (str[point])
{
while (!(str[point] >= 'a' && str[point] <= 'z'))
point++;
if (str[point - 1] == ' ' || str[point - 1] == '\t' ||
str[point - 1] == '\n' || str[point - 1] == ',' ||
str[point - 1] == ';' || str[point - 1] == '.' ||
str[point - 1] == '!' || str[point - 1] == '?' ||
str[point - 1] == '"' || str[point - 1] == '(' ||
str[point - 1] == ')' || str[point - 1] == '{' ||
str[point - 1] == '}' || point == 0)
str[point] -= 32;
point++;
}
return (str);
}
