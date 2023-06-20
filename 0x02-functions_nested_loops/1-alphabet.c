#include "main.h"

/**
 * print _alphabet
 * using _putchar function
 * Return 0
 * by Fassal Farah
 */
void print_alphabet(void)

{
	int i = 0;
	char s[] = "abcdefghijklmnopqrstuvwxyz";

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}	
