#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer value of converted string
 */
int _atoi(char *s)
{
int sgin = 1;
unsigned int num = 0;
do {
if (*s == '-')
sgin *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');
else if (num > 0)
break;
} while (*s++);
return (num *sgin);
}
