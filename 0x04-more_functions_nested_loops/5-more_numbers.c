#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14, 10 times
 */

void more_numbers(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '14'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
}
