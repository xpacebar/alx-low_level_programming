#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @l: character that checks for last digit
 * Return: value of last digit of number
 */

int print_last_digit(int l)
{

	int last;

	last = l % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
