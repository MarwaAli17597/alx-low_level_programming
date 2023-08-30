#include "main.h"

#include "main.h"
int find_strlen(char *s);
int check_palindrome(char *s, int line, int point);
int is_palindrome(char *s);

/**
 * find_strlen - returns length of a string
 * @s: string to be checke
 *
 * Retrun: length of string
 */
int find_strlen(char *s)
{
int line = 0;
if (*(s + line))
{
line++;
line += find_strlen(s + line);
}
return (line);
}
/**
 * check_palindrome - check is string is palindrome
 * @line: length of string
 * @point: The point of string to be checked
 * @s: string to be checked
 *
 * Return: if is string is palindrome return -1 otherwise 0
 */
int check_palindrome(char *s, int line, int point)
{
if (s[point] == s[line / 2])
return (1);
if (s[point] == s[line - point - 1])
return (check_palindrome(s, line, point + 1));
return (0);
}
 /**
  * is_palindrome - checks if string is palndrome
  * @s: string to be checked
  *
  * Return: if string is palindrome return -1 otherwise 0
  */
int is_palindrome(char *s)
{
int point = 0;
int line = find_strlen(s);
if (!(*s))
return (1);
return (check_palindrome(s, line, point));
}
