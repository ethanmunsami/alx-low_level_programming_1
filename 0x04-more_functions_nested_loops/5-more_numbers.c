#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14, 10 times
 */

void more_numbers(void)
{
	int i = 0;
	char ch = '0';

	while (i <= 10)
	{
		for (ch = '0'; ch <= '14'; ch++)
		{
			_putchar(ch);
		}
		i = i + 1;
	}
	_putchar('\n');
}
