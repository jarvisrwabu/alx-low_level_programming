#include "main.h"

/**
 * print_times_table - function that print n times table
 * @n: the number used for computation of times table
 */
void print_times_table(int n)
{
	int product, col_number, row_number, second_digit;

	if (n > 15 || n < 0)
	{
	}
	else
	{
		for (row_number = 0; row_number <= n; row_number++)
		{
			for (col_number = 0; col_number <= n; col_number++)
			{
				product = row_number * col_number;
				if (product > 9 && product < 100)
				{
					if (col_number != 0)
						_putchar(32);
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));

				}
				else if (product > 99)
				{
					second_digit = product / 10;
					_putchar('0' + (product / 100));
					_putchar('0' + (second_digit % 10));
					_putchar('0' + (product % 10));
				}
				else if (product < 10)
				{
					if (col_number != 0)
					{
						_putchar(32);
						_putchar(32);
					}
					_putchar('0' + product);
				}
				if (col_number != n)
				{
					_putchar(44);
					_putchar(32);
				}
				if (col_number == n)
					_putchar('\n');
			}
		}
	}
}
