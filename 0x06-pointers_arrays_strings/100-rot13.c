#include "main.h"
/**
 * rot13 - Encoding string using by rot13
 * @str: String to be encoded
 *
 * Return: A pointer to the encoded
 */
char *rot13(char *str)
{
int point1, point2;
char c[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
char rot13[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
while (str[point1] != '\0')
{
for (point2 = 0; point2 <= 52; point2++)
{
if (str[point1] == c[point2])
{
str[point1] = rot13[point2];
break;
}
}
point1++;
}
return (str);
}
