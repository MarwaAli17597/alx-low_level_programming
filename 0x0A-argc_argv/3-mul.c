#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: an array of arguments
 *
 * Return: always 0
 */
int main(int argc, char const *argv[])
{
int point, multi;
multi = 1;
if (argc < 3)
{
printf("Error\n");
return (1);
}
for (point = 1; point < argc; point++)
{
multi *= atoi(argv[point]);
}
printf("%d\n", multi);
return (0);
}
