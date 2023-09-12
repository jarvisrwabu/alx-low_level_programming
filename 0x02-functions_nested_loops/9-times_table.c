#include "main.h"

/**
 * times_table - function that print 9 times table
 */


void times_table(void)
{

	int col_number;
	int row_number;
	int first_digit;
	int second_digit;
	int product;

	for (col_number = 0; col_number <= 9; col_number++)
	{
		for (row_number = 0; row_number <= 9; row_number++)
		{
			product = col_number * row_number;
			if (product > 9)
			{
				first_digit = product / 10;
				second_digit = product % 10;
				_putchar('0' + first_digit);
				_putchar('0' + second_digit);
			} else
			{
				if (row_number >  0)
				{
					_putchar(32);
					_putchar('0' + product);
				}
				else
					_putchar('0' + product);
			}

			if (row_number != 9)
			{
				_putchar(44);
				_putchar(32);
			}

			if (row_number == 9)
				_putchar('\n');

		}
	}
}
