#include <stdio.h>

/**
 * main - prints all the alphabet in lowercase,
 * followed by a new line, omits q and e and print all other letters
 * Return: Aways 0 (Success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}

