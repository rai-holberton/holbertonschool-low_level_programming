#include <stdio.h>

/**
 * main - Point d'entrée
 *
 * Description: Affiche l'alphabet sans 'e' ni 'q'
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
