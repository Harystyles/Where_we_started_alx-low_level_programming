#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
