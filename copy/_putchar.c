#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the charactor c to stdout
 * @c: The chractor to print
 *
 * Return: On success 1
 *
 * On error, -1 returned and error is set 
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
