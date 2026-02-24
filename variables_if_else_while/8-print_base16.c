#include <stdio.h>

/**
 * main - Point d'entrée
 *
 * Description: Affiche tous les chiffres de la base 16 en minuscules
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	int n;
	char c;

	/* Affichage des chiffres 0-9 */
	n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	/* Affichage des lettres a-f */
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
