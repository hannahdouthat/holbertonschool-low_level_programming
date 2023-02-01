#include "main.h"
/**
 * main - function print_sign
 *
 * @i:i is function of print_sign
 * Return-print_sign value of 0
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
