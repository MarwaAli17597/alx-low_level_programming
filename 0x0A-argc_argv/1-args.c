#include <stdio.h>
/**
 * main - prints all arguments recives
 * @argc: number of arguments
 * @argv: an array of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int arg;
for (arg = 0; arg < argc; arg++)
printf("%d\n", argv[arg]);
return (0);
}
