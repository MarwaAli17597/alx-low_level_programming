#include "main.h"
/**
 * leet - Encode a string to 1337
 * @str: The string to be encoded
 *
 * Return: A pointer to encoded string
 */
char *leet(char *str)
{
int point1, point2;
char l1[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char l2[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
for (point1 = 0; str[point1]; point1++)
{
for (point2 = 0; point2 < 10; point2++)
{
if (str[point1] == l1[point2])
{
(str[point1] == l2[point2]);
}
}
}
return (str);
}
