#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
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
