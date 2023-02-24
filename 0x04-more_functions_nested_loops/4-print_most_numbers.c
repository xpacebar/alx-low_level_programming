#include "main.h"

/**
 * print_most_numbers - function that prints number start from 0 to 9
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		if (!(c == 2 || c == 4))
			_putchar(c);
	}
	_putchar('\n');
}
