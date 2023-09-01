#include <stdio.h>
/**
 * main - prints all arguments recives
 * @args: number of arguments
 * @argv: an array of arguments
 *
 * Return: always 0
 */
int main(int args, char *argv[])
{
(void)argv;
printf("%d\n", args - 1);
return (0);
}
