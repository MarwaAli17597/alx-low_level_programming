#include "main.h"

#include "main.h"
int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix)
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - returns the length of string,ignoring wildcard
 * @str: string to be measured
 *
 * Return: The length string
 */

int strlen_no_wilds(char *str)
{
int line = 0, int point = 0;
if (*(str + point))
{
if (*str != '*')
line++;
point++;
line += strlen_no_wilds(str + point);
}
return (line);
}

/**
 * iterate_wild - iterate through a string
 * @wildstr: string to be itreated
 */

void iterate_wild(char **wildstr)
{
if (**wildstr == '*')
{
(*wildstr)++;
iterate_wild(wildstr);
}
}
/**
 * postfix_match - checks if string is matches the postfix
 * @str: string to be matched
 * @postfix: The postfix
 * Return: if str and postfix matched to null byte other at first in matched
 */
char *postfix_match(char *str, char *postfix)
{
int str_len = strlen_no_wilds(str) - 1;
int postfix_len = strlen_no_wilds(postfix) - 1;
if (*postfix == '*')
iterate_wild(&postfix);
if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
{
postfix++;
return (postfix_match(str, postfix));
}
return (postfix);
}

/**
 * wildcmp - compare two string considring wildcard charctor
 * @s1: first string
 * @s2: second string
 *
 * Return: if the strings can be considered retun -1 other wise 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
iterate_wild(&s2);
s2 = postfix_match(s1, s2);
}
if (*s2 == '\0')
return (1);
if (*s1 != *s2)
return (0);
return (wildcmp(++s1, ++s2));
}
