#include "main.h"
/**
 * leet - Encode a string to 1337
 * @c: The string to be encoded
 *
 * Return: A pointer to encoded string
 */
char *leet(char *c)
{
char *p = c;
char l[] = { 'A', 'E', 'O', 'T', 'L'};
int v[] = { '4', '3', '0', '7', '1'};
unsigned int i;
while (*c)
{
for (i = 0; i < sizeof(L) / sizeof(char); i++)
{
if (*c == l[i] || *c == l[i] + 32)
{
*c = 48 + v[i];
}
}
c++;
}
return (p);
}
