#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to the new string (Success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	char *ar, *str;
	int i, j, cont;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			cont++;
		}
		cont++;
	}
	cont += 1;
	ar = malloc(cont * sizeof(char));
	if (ar == NULL)
		return (NULL);
	str = ar;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*ar = av[i][j];
			j++;
			ar++;
		}
		*ar = '\n';
		ar++;
	}
	return (str);
}
