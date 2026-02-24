#include <stdio.h>

/**
 * main - Point d'entrée
 *
 * Description: Affiche tous les chiffres de la base 10 (0 à 9)
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);
}
