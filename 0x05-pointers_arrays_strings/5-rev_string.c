#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
int line, i;
char tmp;
while (s[i])
line++;
for (i = line - 1; i >= line / 2; i--)
{
tmp = s[i];
s[i] = s[line - i - 1];
s[line - i - 1] = s[i];
}
}
