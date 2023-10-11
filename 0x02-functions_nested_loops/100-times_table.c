#include "main.h"

/**
 * print_times_table - prints times table
 * @n : times table to use
 * Return:void
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
		}
		_puchar('\n');
	}
}
