#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14, 10 times
 */

void more_numbers(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		if (ch != '2' && ch != '4')
		{
			_putchar(ch);
		}
		ch++;
	}
	_putchar('\n');
}
