i#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
unsigned long mul;
int i, j;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
