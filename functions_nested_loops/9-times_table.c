#include "main.h"

/**
 * times_table - 9 times tables printed
 *
 *
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if ((z / 10) == 0)
			{
				if (y == 0)
				{
					_putchar('0');
				}
				if (y != 0)
					_putchar(' ');
				_putchar((z % 10) + '0');
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		else
		{
			_putchar((z / 10) + '0');
			_putchar((z % 10) + '0');
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
