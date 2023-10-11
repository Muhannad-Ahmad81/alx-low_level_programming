#include "main.h"
/**
*print_sign - sjsb jff ff
*@n: assc eer erb
*slkvlvrvek df pdd
*/
int print_sign(int n)
{
if (n == 0)
{
	_putchar('0');
	return (0);
}
else if (n > 0)
{
	_putchar('+');
	return (1);
}
else
{
	_putchar('-');
	return (-1);
}
}
