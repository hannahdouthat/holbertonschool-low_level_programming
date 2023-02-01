#include "main.h"

/**
 * @i: Something
 * print_last_digit - Prints last digit
 *
 * Return: Value
 */

int print_last_digit(int i)
{
	int last;
	last = i % 10;
	if (last <0)
	{last = last * -1;
	}
	_putchar(last + '0');

	return (last);
}
