#include "main.h"
/**
 * leet - Encode a string to 1337
 * @s: The string to be encoded
 *
 * Return: A pointer to encoded string
 */
char *leet(char *s)
{
int i, j;
char l[] = "aAeEoOtTlL";
char v[] = "4433007711";
i = 0;
while (s[i] != 0)
{
j = 0;
while (l[j] != '\0')
{
if (s[i] == l[j])
s[i] = v[j];
j++;
}
i++;
}
return (s);
}
