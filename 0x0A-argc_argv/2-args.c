#include <stdio.h>
/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: an array of arguments
 *
 * Return: always 0
 */
int main(int argc, char const *argv[])
{
int i = 0;
while (argc--)
{
printf("%d\n", argv[i]);
i++;
}
return (0);
}
