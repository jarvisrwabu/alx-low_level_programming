#include "main.h"

/**
 * jack_bauer -function that print every minutes and second
 * h2 - varibale holding first digit of hours
 * h1- varibale holding last digit of hours
 * m1 - variable holding first digit of minuts
 * m2 - vraibale holding last digit of minutes
 */

void jack_bauer(void)
{

	int h2;
	int h1;
	int m1;
	int m2;
	int limit;

	for (h2 = 0; h2 <= 2; h2++)
	{
		limit = (h2 < 2) ? 9 : 3;

		for (h1 = 0; h1 <= limit; h1++)
		{

			for (m2 = 0; m2 <= 5; m2++)
			{
				for (m1 = 0; m1 <= 9; m1++)
				{

					_putchar('0' + h2);
					_putchar('0' + h1);
					_putchar(58);
					_putchar('0' + m2);
					_putchar('0' + m1);
					_putchar(10);
				}
			}
		}
	}
}
