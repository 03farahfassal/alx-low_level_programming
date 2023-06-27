#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i = 0;
	int h;

	while (str[i])
	{
		i++;
	}

	if (i % 2 == 0)
	{
		h = i / 2;
	} else
	{
		h = (i / 2) + 1;
	}

	while (str[h])
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
