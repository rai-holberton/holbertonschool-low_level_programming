#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int row, sp, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (sp = 0; sp < (size - row - 1); sp++)
			_putchar(' ');

		for (hash = 0; hash < (row + 1); hash++)
			_putchar('#');

		_putchar('\n');
	}
}
