#include "main.h"

int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (1);
	}
	else 
	{
	_putchar ('0');
		return (0);
	}
}
