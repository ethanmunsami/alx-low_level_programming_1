#include "main.h"

/**
  * string_toupper - Function changes all lowercase letters to uppercase
  *
  * @p: The string will be modified
  *
  * Return: Char var
  */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
