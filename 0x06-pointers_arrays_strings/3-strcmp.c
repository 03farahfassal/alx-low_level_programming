#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * the function should work exactly like strcmp
 * @string1: input value
 * @string2: input value
 *
 * Return: string1[a] - string2[a]
 */
int _strcmp(char *string1, char *string2)
{
	int a;
	a = 0;
	while (string1[a] != '\0' && string2[a] != '\0')
	{
		if (string1[a] != string2[a])
		{
			return (string1[a] - string2[a]);
		}
		a++;
	}
	return (0);
}
