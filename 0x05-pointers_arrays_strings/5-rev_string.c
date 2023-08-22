#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
int line, i = 0;
char tmp;
for (line = 0; s[line] != '\0'; line++)
;
for (i = line - 1; i >= line / 2; i--)
{
tmp = s[i];
s[i] = s[line - i - 1];
s[line - i - 1] = tmp;
}
}
