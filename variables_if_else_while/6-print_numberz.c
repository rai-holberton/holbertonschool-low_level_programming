#include <stdio.h>

/**
 * main - Point d'entrée
 *
 * Description: Affiche les chiffres de 0 à 9 en utilisant des int
 * et putchar uniquement.
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
