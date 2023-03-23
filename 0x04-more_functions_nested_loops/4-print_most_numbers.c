#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	char ch = '0';

	for (ch = '0'; ch < '10'; ch++)
	{
		if (ch != '2' && ch != '4')
			putchar(ch);
	}
	putchar('\n');
}
