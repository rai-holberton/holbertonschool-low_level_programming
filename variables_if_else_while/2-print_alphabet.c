#include <stdio.h>

/**
 * main - Point d'entrée
 *
 * Description: Affiche l'alphabet en minuscules avec putchar
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
