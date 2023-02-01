#include "main.h"
/**
 *main - function print_sign
 *@i: The number of which the sign will be printed.
 *Return: 1 if the number is greater than zero,
 *0 if the number is zero,
 *-1 if the number is less than zero.
 */

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
