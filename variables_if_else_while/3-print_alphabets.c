#include <stdio.h>

/**
 * main - Point d'entrée
 *
 * Description: Affiche l'alphabet en minuscules puis en majuscules
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	char ch;

	/* Affichage des minuscules */
	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/* Affichage des majuscules */
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	/* Saut de ligne final */
	putchar('\n');

	return (0);
}
