#include <stdio.h>

/**
 * main - Point d'entrée
 *
 * Description: Affiche l'alphabet en minuscules à l'envers (de z à a)
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
